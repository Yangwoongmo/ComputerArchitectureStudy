#include <iostream>
#include <string>

using namespace std;

int main()
{
    int testCase;
    int result = 0;
    string inputNum = "";

    cin >> testCase >> inputNum;

    for (int i = 0; i < testCase; i++)
    {
        result += inputNum[i] - '0';
    }

    cout << result;

    return 0;
}
