#include <stdio.h>
#define N 5
int main()
{
    int count = 0;
    float sum = 0, avg, num;
    while (count < N)
    {
        scanf("%f", &num);
        sum += num;
        count += 1;
    }
    avg = sum / N;
    printf("N=%d Sum=%.3f\n", N, sum);
    printf("Average is : %.3f", avg);
    return 0;
}