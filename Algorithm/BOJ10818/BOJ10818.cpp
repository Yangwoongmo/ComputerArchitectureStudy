#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    int max = INT_MIN;
    int min = INT_MAX;
    int count;
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        int a;
        cin >> a;

        if (max < a)
        {
            max = a;
        }
        if (min > a)
        {
            min = a;
        }
    }
    
    cout << min << ' ' << max;

    return 0;
}
