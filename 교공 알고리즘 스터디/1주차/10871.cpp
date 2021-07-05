#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int n, x, tmp;
    queue<int> a;

    scanf("%d %d", &n, &x);
    while (n--)
    {
        scanf("%d", &tmp);
        if (tmp < x)
            a.push(tmp);
    }
    while (!a.empty())
    {
        int b = a.front();
        printf("%d ", b);
        a.pop();
    }
}