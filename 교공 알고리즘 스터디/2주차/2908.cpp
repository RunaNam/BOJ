#include <cstdio>

using namespace std;

int main()
{
    int a[3];
    int b[3];
    scanf("%1d %1d %1d", &a[2], &a[1], &a[0]);
    scanf("%1d %1d %1d", &b[2], &b[1], &b[0]);

    for (int i = 0; i < 3; i++)
    {
        if (a[i] < b[i])
        {
            printf("%d%d%d", b[0], b[1], b[2]);
            break;
        }
        else if (a[i] > b[i])
        {
            printf("%d%d%d", a[0], a[1], a[2]);
            break;
        }
    }
    return 0;
}