#include <iostream>
#include <string>

using namespace std;

int main()
{
    char scale[8];
    string str = {};

    for (int i = 0; i < 8; i++)
    {
        cin >> scale[i];
        str.push_back(scale[i]);
    }

    if (str == "12345678")
    {
        cout << "ascending";
    }
    else if (str == "87654321")
    {
        cout << "descending";
    }
    else
    {
        cout << "mixed";
    }

    return 0;
}
