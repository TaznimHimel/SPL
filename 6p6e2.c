#include <stdio.h>
int main()
{
    int i, sum = 0;

    for (i = 101; i < 200; i++)
    {
        if (i % 7 == 0)
        {
            sum += i;
        }
        
    }
    printf("SUM=%d\n", sum);
}
