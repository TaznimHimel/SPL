#include <stdio.h>
#include <math.h>
#define PI 3.1416
int main()
{
    double x;

    printf("x\ty\n");
    for (x = 0; x <= 180; x += 15)
    {
        printf("%.2lf\t%.2lf\n", x, sin(x * PI / 180));
    }
    return 0;
}