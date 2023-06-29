#include <iostream>
#include <string>

using namespace std;

int main()
{
    int testCase;

    cin >> testCase;

    for (int i = 0; i < testCase; i++)
    {
        string ox;
        int result = 0;
        int point = 0;

        cin >> ox;

        for (int j = 0; j < ox.length(); j++)
        {
            if (ox[j] == 'O')
            {
                point++;
                result += point;
            }
            else
            {
                point = 0;
            }
        }
        cout << result << '\n';
    }

    return 0;
}
