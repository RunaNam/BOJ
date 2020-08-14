#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int ground[50][50] = {0};
int m, n, k;
int cnt;
void groundN(int x, int y)
{
    if (x >= n || y >= m || x < 0 || y < 0)
    {
        return;
    }
    if (ground[x][y] == 1)
    {
        ground[x][y] = 0;
    }

    else if (ground[x][y] == 0)
    {
        return;
    }
    groundN(x + 1, y);
    groundN(x, y + 1);
    groundN(x - 1, y);
    groundN(x, y - 1);

    return;
}

void init()
{
    for (int i = 0; i < 50; i++)
    {
        for (int j = 0; j < 50; j++)
        {
            ground[i][j] = 0;
        }
    }
}

int main()
{
    int tc;
    int a, b;
    vector<int> result;
    while (tc--)
    {
        init();
        int res = 0;
        scanf("%d %d %d", &n, &m, &k);
        for (int i = 0; i < k; i++)
        {
            int x, y;
            scanf("%d %d", &x, &y);
            ground[x][y] = 1;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (ground[i][j] == 1)
                {
                    res++;
                    groundN(i, j);
                }
            }
        }

        result.push_back(res);
    }

    for (int i = 0; i < (int)result.size(); i++)
    {
        if (i < ((int)result.size() - 1))
        {
            cout << result[i] << endl;
        }
        else
        {
            printf("%d\n", result[i]);
        }
    }
}