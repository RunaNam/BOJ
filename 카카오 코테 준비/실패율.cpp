#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <map>

using namespace std;

bool compare(pair<int, double> &a, pair<int, double> &b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}

vector<int> solution(int N, vector<int> stages)
{
    vector<int> answer;
    sort(stages.begin(), stages.end());

    vector<pair<int, double>> percent;
    int count[501] = {
        0,
    };
    int max = stages.size();

    for (int i = 0; i < stages.size(); i++)
    {
        count[stages[i]]++;
    }

    for (int i = 1; i < N + 1; i++)
    {
        int num = count[i];
        if (num == 0)
            percent.push_back(make_pair(i, 0));
        else
            percent.push_back(make_pair(i, (double)count[i] / (double)max));
        max = max - num;
    }

    sort(percent.begin(), percent.end(), compare);

    for (auto p : percent)
        answer.push_back(p.first);

    return answer;
}