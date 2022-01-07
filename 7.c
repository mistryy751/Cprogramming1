/*Write a C program to display and find the sum of the series
1+11+111+....111 upto n. For eg. if n=4, the series is : 1+11+111+1111. Take
the value of 'n' as input from the user.*/
#include<stdio.h>
#include<conio.h>
long n1(long);
int main()
{long n,sum;
    printf("Enter the number:");
    scanf("%ld",&n);
    sum = n1(n);
    
    getch();
    return 0;
    
}
long n1(long n)
{   int i;
    int t=1;
    long sum1=0;
    if(n==1)
        
        return printf("The Sum is : 1");
    else if (n==0)
        
        
        return printf("The Sum is : 0");
    else
    {
        for(i=1;i<=n;i++)
        {
            printf("%ld  ", t);
            if (i < n)
            {
                printf("+ ");
            }
            sum1 = sum1 + t;
            t = (t * 10) + 1;   
        }
    }
        printf("\nThe Sum is : %ld\n", sum1);
        return sum1;
    
        
    
}