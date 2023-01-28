#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, n, count = 0;
    printf("Enter number of rows:\n");
    scanf("%d", &n);
    printf("Floyd Triangle is: \n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            count++;
            printf("%d ", count);
        }
        printf("\n");
    }
    return 0;
}