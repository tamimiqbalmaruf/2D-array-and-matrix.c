#include <stdio.h>

void rec(int n)
{

    if (n == 0)
    {
        return;
    }

    rec(n / 10);
    int lastDigit = n % 10;
    printf("%d ", lastDigit);
}

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int value;
        scanf("%d", &value);
        if (value == 0)
        {
            printf("0");
        }

        rec(value);
        printf("\n");
    }

    return 0;
};