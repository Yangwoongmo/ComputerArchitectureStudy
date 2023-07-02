#include <iostream>
#include <string>

using namespace std;

int main()
{
    int testCase;

    cin >> testCase;

    for (int i = 0; i < testCase; i++)
    {
        int loop;
        string str;

        cin >> loop >> str;

        for (int j = 0; j < str.length(); j++)
        {
            for (int k = 0; k < loop; k++)
            {
                cout << str[j];
            }
        }
        cout << endl;
    }

    return 0;
}
