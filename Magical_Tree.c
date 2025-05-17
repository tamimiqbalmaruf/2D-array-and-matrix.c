#include <stdio.h>

int main()
{
    int n, star = 1;
    scanf("%d", &n);

    int line = (n+11) / 2;

    int space = line - 1;

    for (int i = 1; i <= line; i++)
    {

        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }

        printf("\n");
        star += 2;
        space--;
    }

    for (int i = 1; i <= 5; i++)
    {

        for (int j = 1; j <= 5; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
};