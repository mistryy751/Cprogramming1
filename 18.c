/*Write a C program, That reads list of n integers and print sum of product of
consecutive numbers. if n=7 and numbers are 4,5,2,5,6,4,7 then output is
4*5+5*2+2*5+5*6+6*4+4*7 = 122.
*/
#include<stdio.h>
int main()
{
    int n,i,a[100],j,sum=0,mul=0;
    printf("Enter how many numbers you want to enter:");
    scanf("%d",&n);
    printf("Enter the numbers:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=1;j<n;j++)
    {
        mul=a[j]*a[j+1];
        sum=sum+mul;
    }
    printf("Sum of product is:%d",sum);
}