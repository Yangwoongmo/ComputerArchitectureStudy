#include <iostream>

using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    for (int i = 0; i < testCase; i++)
    {
        int height, weight, num;
        int result;
        cin >> height >> weight >> num;

        if (num % height == 0)
        {
            result = height * 100 + (num / height);
        }
        else
        {
            result = (num % height) * 100 + (num / height) + 1;
        }

        cout << result << '\n';
    }

    return 0;
}
