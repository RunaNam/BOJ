#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
int nums_b[25];
int nums_a[25];

int main(void)
{
    int a, b, count;
    int num = 0;
    scanf("%d %d", &a, &b);
    scanf("%d", &count);

    for (int i = 0; i < count; i++)
    {
        scanf("%d", &nums_a[i]);
        num += (nums_a[i] - i - 1) * a;
    }
    int j;
    for (int j = 0; num < b; j++)
    {
        nums_b[j] = num % b;
        num /= b;
    }
    for (; j <= 0; j--)
    {
        printf("%d ", nums_b[j]);
    }
}