#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    long long int m;
    int a, b, c;

    for (int i = 0; i < t; i++)
    {
        scanf("%lld %d %d %d", &m, &a, &b, &c);

        long long int mul = (long long)a * b * c;

        long long int missing = m / mul;

        if (mul * missing == m && m % mul == 0)
        {
            printf("%lld \n", missing);
        }
        else
        {
            printf("%d \n", -1);
        }
    }

    return 0;
};