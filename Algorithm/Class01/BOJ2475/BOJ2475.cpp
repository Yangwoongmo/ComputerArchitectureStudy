#include <iostream>

int Square(int i)
{
    i = i * i;
    return i;
}

using namespace std;

int main()
{
    int a, b, c, d, e = 0;
    int result = 0;

    cin >> a >> b >> c >> d >> e;

    result = (Square(a) + Square(b) + Square(c) + Square(d) + Square(e)) % 10;

    cout << result;

    return 0;
}
