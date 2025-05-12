#include <stdio.h>

int main()
{
    // int a[3][4];

    // a[1][2] = 10;

    // printf("%d", a[1][2]);

    int r, c;

    scanf("%d %d", &r, &c);

    int a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);

            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    

    return 0;
};