#include <iostream>

using namespace std;

int main()
{
    int countArray[26] = {0, };
    int maxCount = 0;
    string str;

    cin >> str;
    // asc code A = 65, a = 97   '32'
    for (int i = 0; i < str.length(); i++)
    {

        if (str[i] < 97) // 대문자
        {
            countArray[str[i] - 65]++;
        }
        else  // 소문자
        {
            countArray[str[i] - 97]++;
        }
    }

    int max = 0;
    int index = 0;

    for (int i = 0; i < 26; i++)
    {
        if (countArray[i] > max)
        {
            max = countArray[i];
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (countArray[i] == max)
        {
            maxCount++;
            index = i;
        }
    }

    if (maxCount > 1)
    {
        cout << "?";
    }
    else
    {
        char a = index + 65; // 대문자로 출력
        cout << a;
    }
    
    return 0;
}
