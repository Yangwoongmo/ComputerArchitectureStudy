#include <iostream>

using namespace std;

int main()
{
    int array[10] = { 0, };
    int remainArray[42] = {0,};
    int result = 0;

    for (int i = 0; i < 10; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < 10; i++)
    {
        int index = array[i] % 42;
        remainArray[index]++;
    }

    for (int i = 0; i < 42; i++)
    {
        if (remainArray[i] > 0)
        {
            result++;
        }
    }

    cout << result;

    return 0;
}
