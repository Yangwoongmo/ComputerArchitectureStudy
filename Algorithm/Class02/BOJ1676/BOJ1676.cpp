#include <iostream>

using namespace std;

int Factorial(int num)
{
    int count = 0;
    for (int i = 1; i <= num; i++)
    {
        int temp = i;

        while (true)
        {
            if (temp % 5 == 0)
            {
                count++;
                temp /= 5;
            }
            else
            {
                break;  
            }
        }
    }
    return count;
}

int main()
{
    int num;
    cin >> num;
    cout << Factorial(num);

    return 0;
}