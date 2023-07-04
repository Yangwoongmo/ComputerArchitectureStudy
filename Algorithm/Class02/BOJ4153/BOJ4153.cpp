#include <iostream>

using namespace std;

bool isRightTriangle(int a, int b, int c)
{
    a *= a;
    b *= b;
    c *= c;
    if ((a + b == c) || (b + c == a) || (c + a == b))
    {
        return true;
    }
    return false;
}

int main()
{
    while (true)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a == 0)
        {
            break;
        }

        bool result = isRightTriangle(a, b, c);
        if (result)
        {
            cout << "right\n";
        }
        else
        {
            cout << "wrong\n";
        }
    }

    return 0;
}