#include <iostream>

using namespace std;

int main()
{
    int n, tmp;
    int count = 1;
    scanf("%d", &n);

    tmp = (n % 10 * 10) + ((n / 10 + n % 10) % 10);

    while (tmp != n)
    {
        tmp = (tmp % 10 * 10) + ((tmp / 10 + tmp % 10) % 10);
        count++;
    }
    printf("%d", count);
}