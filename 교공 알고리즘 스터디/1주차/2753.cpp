#include <iostream>

using namespace std;

int main()
{
    int a, is_leap;
    scanf("%d", &a);
    if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
        is_leap = 1;
    else
        is_leap = 0;
    printf("%d", is_leap);
}