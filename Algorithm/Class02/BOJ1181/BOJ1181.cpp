#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool Compare(string a, string b) 
{
    if (a.length() == b.length())
    {
        return a < b;
    }

    return a.length() < b.length();
}

int main()
{
    int count;
    vector<string> vec;

    cin >> count;

    for (int i = 0; i < count; i++) 
    {
        string str;
        cin >> str;

        if (find(vec.begin(), vec.end(), str) == vec.end()) // vector안에 str이 없다면
        {
            vec.push_back(str);
        }
    }

    sort(vec.begin(), vec.end(), Compare);

    for (int i = 0; i < vec.size(); i++) 
    {
        cout << vec[i] << '\n';
    }

    return 0;
}
