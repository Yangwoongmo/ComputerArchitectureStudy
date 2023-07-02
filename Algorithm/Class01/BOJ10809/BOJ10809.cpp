#include <iostream>

using namespace std;

int main()
{
    string s;
    int resultArray[26] = { 0, };
    cin >> s;

    for (int i = 0; i < 26; i++)
    {
        resultArray[i] = -1;
    }

    for (int i = 0; i < s.length(); i++)
    {
        int index = s[i] - 97; // ASC a == 97

        if (resultArray[index] == -1)
        {
            resultArray[index] = i;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        cout << resultArray[i] << ' ';
    }

    return 0;
}
