#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int size;
        scanf("%d", &size);

        int a[size];
        int b[size];

        for (int i = 0; i < size; i++)
        {
            scanf("%d", &a[i]);
        }

        for (int i = 0; i < size; i++)
        {
            b[i] = a[i];
        }

        for (int j = 0; j < size - 1; j++)
        {
            for (int k = 0; k < size - j - 1; k++)
            {
                if (b[k] > b[k + 1])
                {
                    int temp = b[k];
                    b[k] = b[k + 1];
                    b[k + 1] = temp;
                }
            }
        }

        int c[size];

        for (int i = 0; i < size; i++)
        {

            c[i] = abs(a[i] - b[i]);

            printf("%d ", c[i]);
        }

        printf("\n");
    }

    return 0;
};