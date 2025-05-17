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
            scanf("%d", &a[i][c]);
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
                    printf("hello1 => %d %d \n", i,j);
                    jaduMatrix = 0;
                }
                else if (i + j == r - 1 && a[i][j] != 1)
                {
                    printf("hello2 => %d %d \n", i,j);
                    jaduMatrix = 0;
                }

                else if (i != j && i + j != r - 1 && a[i][j] != 0)
                {
                    printf("hello3 => %d %d \n", i,j);
                    jaduMatrix = 0;
                }
            }
        };
    }

    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {

    //         if (i + j != r - 1 && a[i][j] != 0)
    //         {
    //             jaduMatrix = 0;
    //         }
    //     }
    // };

    // printf("%d", jaduMatrix);
    printf("%s", jaduMatrix ? "YES" : "NO");

    return 0;
};