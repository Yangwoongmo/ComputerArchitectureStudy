#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, M;
    int start, end, ballNum;
    vector<int> basket;

    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        basket.push_back(0);
    }

    for (int i = 0; i < M; i++)
    {
        cin >> start >> end >> ballNum;

        for (int startIndex = start - 1; startIndex <= end - 1; startIndex++)
        {
            basket[startIndex] = ballNum;
        }
    }

    for (int i = 0; i < basket.size(); i++)
    {
        cout << basket[i] << ' ';
    }

    return 0;
}