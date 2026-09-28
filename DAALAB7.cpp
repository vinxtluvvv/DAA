#include <stdio.h>

long long powerFast(int x, int n)
{
    if (n == 0)
        return 1;

    long long half = powerFast(x, n / 2);

    if (n % 2 == 0)
        return half * half;
    else
        return x * half * half;
}

int main()
{
    int x, n;

    printf("Enter base: ");
    scanf("%d", &x);

    printf("Enter exponent: ");
    scanf("%d", &n);

    printf("%d^%d = %lld\n", x, n, powerFast(x, n));

    return 0;
}
