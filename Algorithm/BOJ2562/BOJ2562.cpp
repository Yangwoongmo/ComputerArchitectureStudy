#include <iostream>

using namespace std;

int main()
{
    int count[9] = { 0, };
    int max = 0;
    int index = 0;

    for (int i = 0; i < 9; i++)
    {
        cin >> count[i];
    }

    for (int i = 0; i < 9; i++)
    {
        if (count[i] > max)
        {
            index = i + 1;
            max = count[i];
        }
    }

    cout << max << endl << index;

    return 0;
}
