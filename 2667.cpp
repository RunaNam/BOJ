#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int map[26][26];
int result[26];
int count;
int n;

int main(void)
{
    int cnt = 0;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        num[a][b] = 1;
        num[b][a] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            cnt++;
            DFS(i);
        }
    }
}