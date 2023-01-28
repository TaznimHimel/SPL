#include <stdio.h>
int main()
{
    int n, i, j, c;
    printf("Input Number :\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            c = i;
            if (c > j)
            {
                printf("\n");
                c++;
            }
            else
            {
                printf("*");
            }
        }
    }
    return 0;
}