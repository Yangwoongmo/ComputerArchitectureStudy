#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a, b, c = 0;
    int arr[10] = { 0, };
    int result;
    string str;

    cin >> a >> b >> c;

    result = a * b * c;

    str = to_string(result);

    for (int i = 0; i < str.length(); i++)
    {
        int index = str[i] - '0';
        arr[index]++;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
