#include <iostream>

using namespace std;

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int b1, b2, b3;
    b1 = b % 10;
    b2 = (b / 10) % 10;
    b3 = b / 100;

    printf("%d\n", a * b1);
    printf("%d\n", a * b2);
    printf("%d\n", a * b3);
    printf("%d\n", a * b);
}
s