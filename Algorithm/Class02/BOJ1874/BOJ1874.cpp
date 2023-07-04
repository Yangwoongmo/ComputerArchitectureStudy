#include <iostream>
#include <stack>

using namespace std;

stack<int> intStack;
string str;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int loop;
    int count = 1;
    cin >> loop;

    for(int i = 0; i < loop; i++)
    {
        int num;
        cin >> num;

        while (count <= num)
        {
            intStack.push(count);
            count++;
            str.push_back('+');
        }

        if (intStack.top() == num)
        {
            intStack.pop();
            str.push_back('-');
        }
        else
        {
            cout << "NO";
            return 0;
        }
    }

    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i] << '\n';
    }

    return 0;
}