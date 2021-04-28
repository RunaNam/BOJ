#include <string>
#include <vector>
#include <cstring>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

vector<string> split(string s, string divid)
{
    vector<string> v;
    char *c = strtok((char *)s.c_str(), divid.c_str());
    while (c)
    {
        v.push_back(c);
        c = strtok(NULL, divid.c_str());
    }
    return v;
}

vector<string> solution(vector<string> record)
{
    vector<string> answer;
    vector<string> uid;
    map<string, string> name;

    for (string a : record)
    {
        vector<string> temp = split(a, " ");
        if (temp[0] == "Enter")
        {
            answer.push_back("님이 들어왔습니다.");
            uid.push_back(temp[1]);
            name[temp[1]] = temp[2];
        }
        else if (temp[0] == "Leave")
        {
            answer.push_back("님이 나갔습니다.");
            uid.push_back(temp[1]);
        }
        else
        {
            name[temp[1]] = temp[2];
        }
    }

    for (int i = 0; i < answer.size(); i++)
    {
        answer[i] = name[uid[i]] + answer[i];
    }

    return answer;
}

int main()
{
    vector<string> r = {
        "Enter uid1234 Muzi", "Enter uid4567 Prodo", "Leave uid1234", "Enter uid1234 Prodo", "Change uid4567 Ryan"};
    vector<string> a = solution(r);
    for (string b : a)
    {
        cout << b << '\n';
    }
}
