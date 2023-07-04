#include <iostream>

using namespace std;

int main()
{
    int angleCount = 0; // N E S W, default == N
    char direction[4] = { 'N', 'E', 'S', 'W' };

    for (int i = 0; i < 10; i++)
    {
        int turn;
        cin >> turn;

        if (turn == 1)
        {
            angleCount++;
        }
        else if (turn == 2)
        {
            angleCount += 2;
        }
        else
        {
            angleCount--;
        }

        if (angleCount < 0)
        {
            for (int i = 0; angleCount < 0; i++)
            {
                angleCount += 4;
            }
        }
        if (angleCount > 3)
        {
            for (int i = 0; angleCount > 3; i++)
            {
                angleCount -= 4;
            }
        }
    }

    cout << direction[angleCount];

    return 0;
}