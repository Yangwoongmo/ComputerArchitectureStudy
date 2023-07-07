#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M;
vector<int> tableVec;
vector<int> resultVec;

void Search(int key)
{
    int start = 0;
    int end = N - 1;
    int mid;

    while (end >= start)
    {
        mid = (start + end) / 2;

        if (tableVec[mid] == key)
        {
            cout << '1' << '\n';
            return;
        }
        else if (tableVec[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    cout << 0 << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        tableVec.push_back(x);
    }

    sort(tableVec.begin(), tableVec.end());

    cin >> M;
    for (int i = 0; i < M; i++)
    {
        int input;
        cin >> input;

        Search(input);
    }

    return 0;
}