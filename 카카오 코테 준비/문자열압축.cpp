
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <cstring>

using namespace std;

vector<string> substring(string s, int num, int len)
{
    vector<string> v;
    int n = len / num;
    for (int i = num; i < n; i++)
    {
        v.push_back(s.substr(i - num, num + 1));
    }
    return v;
}

int solution(string s)
{
    int answer = 9999;

    // 약수 넣어둠
    queue<int> a;
    for (int i = 2; i <= s.length; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                a.push(j);
            }
        }
    }

    while (!a.empty())
    {
        int count = a.front();
        int n = 1;
        a.pop();
        vector<string> tmp = substring(s, count, s.length());
        map<string, int> m;
        string old = tmp[0];
        for (int i = 1; i < tmp.size; i++)
        {
            if (old == tmp[i])
            {
                n++;
                m.insert(make_pair(tmp[i], n));
            }
            else
            {
                n = 1;
                m.insert(make_pair(tmp[i], n));
            }
            old = tmp[i];
        }
        // map 에서 확인해서 더함
        // min이랑 비교해서 최소값으로 지냏ㅇ
    }

    return answer;
}

int main()
{
}