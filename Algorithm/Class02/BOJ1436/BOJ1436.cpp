#include <iostream>
#include <string>

using namespace std;

int FindCount(int seriesNum)
{
    int target = 666; // 처음은 무조건 666부터 시작
    int count = 0;
    while (true)
    {
        string str = to_string(target);

        for (int i = 0; i < str.length() - 2; i++)
        {
            if (str[i] == '6' && str[i + 1] == '6' && str[i + 2] == '6')
            {
                count++;
                if (count == seriesNum)
                {
                    return target;
                }
                break; // break 사용하지 않으면 6666이나 66666같은 수에서 문제 발생
            }
        }
        target++;
    }
}

int main()
{
    int seriesNum;
    cin >> seriesNum;

    cout << FindCount(seriesNum);

    return 0;
}