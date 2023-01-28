#include <stdio.h>
int main()
{
    float n, square;
    printf("Enter a number : ");
    scanf("%f", &n);
    square = n * n;
    printf("Square is : %.2lf\n", square);
    return 0;
}