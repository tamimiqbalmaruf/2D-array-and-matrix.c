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

    if(r == 1){
        printf("Row Matrix");
    }else if (c == 1)
    {
        printf("Column Matrix");
    }else if (r == 3)
    {
        printf("Square Matrix");
    }else
    {
        printf("Nothing");
    }
    
    
    
};