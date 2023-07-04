#include <iostream>

using namespace std;

int cardArray[101];

int main()
{
    int N, M;
    int maxCount = 0;
    int temp = 0;
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        cin >> cardArray[i];
    }

    for (int i = 0; i < N - 2; i++)
    {
        for (int j = i + 1; j < N - 1; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                temp = cardArray[i] + cardArray[j] + cardArray[k];

                if (temp <= M)
                {
                    maxCount = max(temp, maxCount);
                }
            }
        }
    }

    cout << maxCount;

    return 0;
}