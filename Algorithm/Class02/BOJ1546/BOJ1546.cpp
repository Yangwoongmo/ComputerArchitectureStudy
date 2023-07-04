#include <iostream>

using namespace std;

float scores[1000];

int main()
{
    float count;
    float max = 0;
    float addScore = 0;
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        float score;
        cin >> score;
        scores[i] = score;

        if (score > max)
        {
            max = score;
        }
    }

    for (int i = 0; i < count; i++)
    {
        float score = (scores[i] / max) * 100;
        scores[i] = score;
    }

    for (int i = 0; i < count; i++)
    {
        addScore += scores[i];
    }

    cout << addScore / count;

    return 0;
}