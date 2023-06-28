#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        cout << i << '\n'; // << endl 사용시 timeOut
    }

    return 0;
}
