#include <string>
#include <vector>
#include <map>

using namespace std;
// https://school.programmers.co.kr/learn/courses/30/lessons/176963
vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    
    map<string, int> m1;
    vector<int> answer;

    for (int i = 0; i < name.size(); i++)
    {
        m1[name[i]] = yearning[i];
    }

    for (int i = 0; i < photo.size(); i++)
    {
        int allScore = 0;
        for (int j = 0; j < photo[i].size(); j++)
        {
            int score = m1[photo[i][j]];
            allScore += score;
        }
        answer.push_back(allScore);
    }

    return answer;
}