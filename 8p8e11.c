#include<stdio.h> 
#include<string.h> 
int main()
{
char a[100];
printf("\nEnter a String: \n"); 
scanf("%[^\n]s",a);
int x;
x= strlen(a);
printf("\n\nThe length of given string is %d\n\n\n",x); 
}