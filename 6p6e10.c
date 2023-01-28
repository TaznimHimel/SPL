#include <stdio.h>
#include <math.h> /* Used for sqrt() */

int main()
{
    float a, b, c, d, x, x1, x2;
    printf("Enter values of a, b, c : ");
    scanf("%f%f%f", &a, &b, &c);
    d = (b * b) - (4 * a * c);
    if (a == 0 && b == 0)
    {

        printf("No solution.\n");
    }
    else if (a == 0)
    {
        x = -(c / b);
        printf("There is only one root = %.2f\n", x);
    }
    else if (d < 0)
    {
        printf("There are no real roots.\n");
    }
    else
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("The roots are real.\n");
        printf("X1 = %.2f\nX2 = %.2f", x1, x2);
    }
    return 0;
}