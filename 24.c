/*Write a function that returns the largest value stored in an array-of-int. Test
the function in a simple program.*/
#include<stdio.h>
int main()
{
    int a[5],i,max=0;
    printf("Enter the elements of the array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("The largest element is %d",max);
    return 0;
}
