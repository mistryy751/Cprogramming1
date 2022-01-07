/*Program to swap two numbers with or without using a third variable.*/
#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter 2 Numbers:\n");
    scanf("%d %d",&x,&y);
    printf("Before Swap X=%d , Y=%d", x, y);

    printf(" After Swap X=%d , Y=%d",y,x);
    return 0;
}