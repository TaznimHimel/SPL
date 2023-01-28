#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("Enter a four-digit integer: ");
    scanf("%d", &num);
    sum = sum + num % 10;
    for (int i = 0; i < 4; i++)
    {
        num = num / 10;
        sum = sum + num % 10;
    }
    printf("The sum of the digits is: %d\n", sum);
    return 0;
}