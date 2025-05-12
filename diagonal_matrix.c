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
    };

    int is_diagonal = 1;

    if (r != c)
    {
        is_diagonal = 0;
        printf("Not Diagonal Matrix");
    }
    else
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                // for primary checking
                // if (i != j && a[i][j] != 0)
                // {
                //     is_diagonal = 0;
                // }

                // for secondary checking
                if (i + j != r - 1 && a[i][j] != 0)
                {
                    is_diagonal = 0;
                }
            }
        };
    }


    printf("%s", is_diagonal ? "Diagonal Matrix" : "Not Diagonal Matrix");

    return 0;
};