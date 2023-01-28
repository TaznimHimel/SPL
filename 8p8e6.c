#include<stdio.h> 
int main(){
int a[5]={1,3,5,7,9}; 
int b[5]={2,4,6,8,10};
printf("\nBefore Merge The array is: \nArray A[5] : "); 
for(int i=0 ; i<5 ; i++)
{
printf("%d ",a[i]); 
}
printf("\nArray B[5]: "); 
for(int i=0 ; i<5 ; i++)
{
printf("%d ",b[i]); 
}
printf("\n");
printf("\nAfert merging and sorting in ascending order, The New array C[10] is : \n"); 
int c[10];
for(int i=0 ; i<10 ; i++)
{ 
if(i<5)
{
c[i]=a[i]; 
} else
c[i]=b[i-5]; 
}
for(int i=0; i<10 ; i++)
{ 
for(int j=i; j<10; j++)
{
int temp; 
if(c[i]>c[j])
{
temp=c[i]; 
c[i]=c[j]; 
c[j]=temp;
} 
}
}
for(int i=0 ; i<10 ; i++)
{ 
printf("%d ",c[i]);
}
printf("\n\n"); 
}