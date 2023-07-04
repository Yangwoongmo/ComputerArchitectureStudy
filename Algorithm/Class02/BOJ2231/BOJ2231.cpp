#include <iostream>

using namespace std;

int main()
{
    int num;
    int result = 0;
    cin >> num;

    for (int i = 1; i < num; i++)
    {
        int sum = 0;
        int count = i;

        while (count != 0)
        {
            sum += count % 10;
            count /= 10;
        }

        if (sum + i == num)
        {
            result = i;
            break;
        }
    }

    cout << result;

    return 0;
}