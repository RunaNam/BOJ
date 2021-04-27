#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string p)
{
    if (p == "")
    {
        return "";
    }
    else
    {
        string u, v;
        int count = 0;
        int i;
        bool right = true; // u가 올바른 문자열인지 확인

        // u 와 v 정리
        for (i = 0; i < p.length(); i++)
        {
            if (p[i] == '(')
            {
                count++;
                u += p[i];
            }
            else
            {
                if (count == 0)
                {
                    right = false;
                }
                count--;
                u += p[i];
            }
            if (count == 0)
                break;
        }
        v = p.substr(i + 1);

        // u 가 올바른 문자열일 경우
        if (right)
        {
            return u + solution(v);
        }
        //u 가 올바른 문자열이 아닐 경우
        else
        {
            string tmp;
            tmp += "(";
            tmp += solution(v);
            tmp += ")";
            u.erase(0, 1);
            u.pop_back();
            for (int j = 0; j < u.length(); j++)
            {
                if (u[j] == '(')
                    u[j] = ')';
                else
                    u[j] = '(';
            }
            tmp += u;
            return tmp;
        }
    }
}

int main()
{
    cout << solution("(()())()") << '\n';
    cout << solution(")(") << '\n';
    cout << solution(")()()()(");
}
