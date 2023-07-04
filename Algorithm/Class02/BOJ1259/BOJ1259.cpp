#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string input;
    string inputString;

    while (true)
    {
        cin >> input;

        if (input == "0") // 마지막 줄에 0이 들어오면 while문 break
        {
            break;
        }

        inputString = input;
        reverse(input.begin(), input.end()); // #include <algorithm>

        if (inputString == input)
        {
            cout << "yes\n";
        }
        else
        {
            cout << "no\n";
        }
        
    }

    return 0;
}