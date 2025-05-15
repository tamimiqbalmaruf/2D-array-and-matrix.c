#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        int j = i + 1;
        while (j < n)
        {
            if (a[i] < a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            j++;
        }
    }

    long long int sum = 0;

    for (int i = 0; i < k; i++)
    {
        if (a[i] > 0)
        {
            sum += a[i];
        }
    }

    printf("%lld", sum);

    return 0;
};