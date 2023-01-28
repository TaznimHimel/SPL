#include <stdio.h>
int main()
{
    char a[] = "WORDPROCESSING";
    printf("%.4s PROCESSING\n", a);
    printf("%.4s\nPROCESSING\n", a);
    printf("%.1s.P.");
}