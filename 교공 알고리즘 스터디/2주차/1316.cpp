#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string s;
vector<char> v;

bool check()
{
    char oldC = s[0];
    for (int i = 1; i < s.size(); i++)
    {
        char newC = s[i];
        v.push_back(oldC);

        if (oldC != newC)
        {
            oldC = newC;
            if (find(v.begin(), v.end(), newC) != v.end())
            {
                v.clear();
                return false;
            }
        }
    }
    v.clear();
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    int ans = 0;
    cin >> n;

    while (n--)
    {
        cin >> s;
        if (check())
            ans++;
    }
    cout << ans;
}