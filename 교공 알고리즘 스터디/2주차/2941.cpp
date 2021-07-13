#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    int cnt;

    cin >> s;
    cnt = s.size();
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '=')
        {
            if (i >= 2 && s[i - 1] == 'z' && s[i - 2] == 'd')
                cnt -= 2;
            else
                cnt -= 1;
        }
        else if (s[i] == 'j' && i != 0)
        {
            if (s[i - 1] == 'l' || s[i - 1] == 'n')
                cnt -= 1;
        }
        else if (s[i] == '-')
        {
            cnt -= 1;
        }
    }
    cout << cnt;
}