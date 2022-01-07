/*Write a C program to take a list of n elements from the user. Store it in an
array. Reverse the list.*/
#include<stdio.h>
int main()
{
    int n,i,a[100],j;
    printf("Enter how many numbers you want to enter:");
    scanf("%d",&n);
    printf("Enter the numbers:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=n;j>=1;j--)
    {
        printf("%d",a[j]);
    }
}