#include <stdio.h>

int main()
{
    int r, c;

    scanf("%d %d", &r, &c);

    int a[r][c];

    int zeroMatrix = 1;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);

            if (a[i][j] != 0)
            {
                zeroMatrix = 0;
            }
        }
    };

    printf("%s", zeroMatrix ? "Zero Matrix" : "Not Zero Matrix");

    return 0;
};