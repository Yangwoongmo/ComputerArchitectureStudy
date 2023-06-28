#include <iostream>

using namespace std;

int main()
{
    int hour, minute;
    int lossMinute;
    cin >> hour >> minute;

    lossMinute = minute - 45;

    if (lossMinute < 0)
    {
        hour--;
        minute = 60 + lossMinute;
    }
    else
    {
        minute -= 45;
    }

    if (hour < 0)
    {
        hour = 24 + hour;
    }

    cout << hour << ' ' << minute;

    return 0;
}
