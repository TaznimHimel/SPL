#include <stdio.h>
int main()
{
    int percentage;
    printf("Enter Percentage : ");
    scanf("%d", &percentage);
    if (percentage >= 80)
    {
        printf("First Divison.\n");
    }
    else if (percentage >= 60 && percentage < 80)
    {
        printf("Second Division.\n");
    }
    else
    {
        printf("Third Division.\n");
    }
}