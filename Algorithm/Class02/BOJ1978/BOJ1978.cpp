#include <iostream>

using namespace std;

int main()
{
    int loop;
    int result = 0;
    cin >> loop;

    for (int i = 0; i < loop; i++)
    {
        int temp;
        int count = 0;
        cin >> temp;

        for (int j = 1; j <= temp; j++)
        {
            if (temp % j == 0)
            {
                count++;
            }
        }

        if (count == 2)
        {
            result++;
        }
    }

    cout << result;

    return 0;
}