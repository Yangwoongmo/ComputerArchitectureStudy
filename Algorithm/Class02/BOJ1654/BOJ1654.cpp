#include <iostream>
#include <algorithm>

using namespace std;

unsigned int lines[10001];

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    unsigned int K, N;
    unsigned int maxInt = 0;
    unsigned int result = 0;

    cin >> K >> N;

    for (int i = 0; i < K; i++)
    {
        cin >> lines[i];
        maxInt = max(maxInt, lines[i]);
    }

    unsigned int left = 1, right = maxInt, mid;

    while (left <= right)
    {
        unsigned int count = 0;
        mid = (left + right) / 2;

        for (int i = 0; i < K; i++)
        {
            count += lines[i] / mid;
        }

        if (count >= N)
        {
            left = mid + 1;

            result = max(result, mid);
        }
        else
        {
            right = mid - 1;
        }
    }

    cout << result;

    return 0;
}