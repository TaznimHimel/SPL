#include <stdio.h>
#include <conio.h>
#define M 2
int main(void)
{
    int i, j, k, a[M][M], b[M][M], c[M][M];
    printf("Enter the matrix A:\n");
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < M; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEnter the matrix B:\n");
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < M; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    // calculation begins
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < M; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < M; k++)
            {
                c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
            }
        }
    }
    printf("\nThe resultant matrix C is:\n");
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < M; j++)
        {
            printf("%d", c[i][j]);
        }
        printf("\n");
    }
}