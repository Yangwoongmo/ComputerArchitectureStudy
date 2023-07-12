#include <iostream>

using namespace std;

int basket[100];

int main()
{
    int N, M;
    int start, end, ballNum;

    cin >> N >> M;

    for (int i = 0; i < M; i++)
    {
        cin >> start >> end >> ballNum;

        for (int startIndex = start - 1; startIndex <= end - 1; startIndex++)
        {
            basket[startIndex] = ballNum;
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << basket[i] << ' ';
    }

    return 0;
}