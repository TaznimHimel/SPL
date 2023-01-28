#include<stdio.h> 
int main()
{
int m,n;
printf("\nEnter m and n for m x n matrix:  "); 
scanf("%d%d",&m,&n);
int a[m][n];
printf("\nEnter value of %d x %d matrix: \n",m,n); 
// ------- scanning the input ---------//
for(int i=0 ; i<m ; i++)
{ 
for(int j = 0 ; j<n ; j++)
{
scanf("%d",&a[i][j]); 
}
}
// ----------- Printing The Transpose Matrix ---------// 
printf("\nTranspose of that Matrix is:\n");
for(int i=0 ; i<n ; i++)
{ 
for(int j = 0 ; j<m ; j++)
{
printf("%d ",a[j][i]); 
}
printf("\n"); 
}
printf("\n\n"); 
}