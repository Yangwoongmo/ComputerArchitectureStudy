#include <iostream>

using namespace std;

int main()
{
    int year;
    int CaseA, CaseB, CaseC = 0;
    cin >> year;

    CaseA = year % 4;
    CaseB = year % 100;
    CaseC = year % 400;

    if ((CaseA == 0 && CaseB != 0) || CaseC == 0)
    {
        cout << '1';
    }
    else
    {
        cout << '0';
    }

    return 0;
}
