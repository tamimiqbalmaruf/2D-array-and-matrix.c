#include <stdio.h>

long long int fac(int n)
{
    if (n == 1)
    {
        return 1;
    }

    long long int val = fac(n - 1);
    return val * n;
}

int main()
{
    int n;
    scanf("%d", &n);

    long long int result = fac(n);

    printf("%lld", result);

    return 0;
};