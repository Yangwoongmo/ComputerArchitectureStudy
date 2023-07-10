#include <string>
#include <vector>
#include <map>

using namespace std;
// https://school.programmers.co.kr/learn/courses/30/lessons/178871;
vector<string> solution(vector<string> players, vector<string> callings) {

    map<string, int> m1;
    int callIndex;
    int nextIndex;

    for (int i = 0; i < players.size(); i++)
    {
        m1[players[i]] = i;
    }

    for (int i = 0; i < callings.size(); i++)
    {
        callIndex = m1[callings[i]];
        nextIndex = callIndex - 1;
        string temp = players[callIndex];

        m1[players[callIndex]]--;
        m1[players[nextIndex]]++;

        players[callIndex] = players[nextIndex];
        players[nextIndex] = temp;
    }

    return players;
}