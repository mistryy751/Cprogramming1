/*Write a C program to check if a number has three consecutive 5s. If yes,
print YES, else print NO. Example: Number: 1353554 Result: NO Number:
345559 Result: YES*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,temp,t=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n!=0)
    {
        temp=n%10;
        n=n/10;
        if(temp==5)
        {
            t=t+1;
        }                
    }    
    if(t=3)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}