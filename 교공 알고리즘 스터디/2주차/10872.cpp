#include <stdio.h>

using namespace std;

void factorial(int n)
{
    long long int result = n;
    while (--n)
    {
        result *= n;
    }
    printf("%lld", result);
}

int main()
{
    int n;
    scanf("%d", &n);
    if (n == 0)
        printf("1");
    else
        factorial(n);
}