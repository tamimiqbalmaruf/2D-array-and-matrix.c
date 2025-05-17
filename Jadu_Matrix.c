#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int jaduMatrix = 1;

    if (r == c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {

                if (i == j && a[i][j] != 1)
                {
                    jaduMatrix = 0;
                }
                else if (i + j == r - 1 && a[i][j] != 1)
                {
                    jaduMatrix = 0;
                }

                if (i != j && i + j != r - 1 && a[i][j] != 0)
                {
                    jaduMatrix = 0;
                }
            }
        };
    }
    else
    {
        jaduMatrix = 0;
    }

    printf("%s", jaduMatrix ? "YES" : "NO");

    return 0;
};