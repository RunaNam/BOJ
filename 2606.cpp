#include <cstdio>
#include <queue>
#define MY_MAX 101
using namespace std;
int com, link;
int mycount = 0;
int virus[MY_MAX] = {
    0,
};
int map[MY_MAX][MY_MAX] = {
    0,
};

void virus_com()
{
    virus[1] = 1;
    queue<int> q;
    q.push(1);
    while (!q.empty())
    {
        int p = q.front();
        q.pop();
        for (int i = 1; i <= com; i++)
        {
            if (!virus[i] && map[p][i] == 1)
            {
                q.push(i);
                virus[i] = 1;
                mycount++;
            }
        }
    }
}

int main(void)
{
    scanf("%d", &com);
    scanf("%d", &link);

    for (int i = 0; i < link; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        map[a][b] = map[b][a] = 1; // map a->b b->a 모두 지정해줄것!
    }
    virus_com();
    printf("%d", mycount);
}