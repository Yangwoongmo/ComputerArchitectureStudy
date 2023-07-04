#include <iostream>
#include <string>

using namespace std;

string whiteStart[8] =
{
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW"
};

string blackStart[8] =
{
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB"
};

string chessBoard[50];

int FindStartColor(int x, int y, bool isWhite)
{
    int count = 0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (isWhite)
            {
                if (chessBoard[x + i][y + j] != whiteStart[i][j])
                {
                    count++;
                }
            }
            else
            {
                if (chessBoard[x + i][y + j] != blackStart[i][j])
                {
                    count++;
                }
            }
        }
    }

    return count;
}

int main()
{
    int x, y;
    int minValue = 100000;
    cin >> x >> y;

    for (int i = 0; i < x; i++)
    {
        cin >> chessBoard[i];
    }

    for (int i = 0; i + 8 <= x; i++)
    {
        for (int j = 0; j + 8 <= y; j++)
        {
            int temp;
            temp = min(FindStartColor(i, j, true), FindStartColor(i, j, false));

            if (temp < minValue)
            {
                minValue = temp;
            }
        }
    }

    cout << minValue;

    return 0;
}
