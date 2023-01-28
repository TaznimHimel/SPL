#include <stdio.h>
int main()
{
    int i, n;
    float s = 0.00;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i < n)
        {
            printf("1/%d +", i);
            s += 1 / (float)i;
        }
        if (i == n)
        {
            printf("1/%d", i);
            s += 1 / (float)i;
        }
    }
    printf("\n Sum of Series upto %d terms : %f \n", n, s);

    return 0;
}