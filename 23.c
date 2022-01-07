/*Write a function that takes three arguments: a character and two integers.
The character is to be printed. The first integer specifies the number of times
that the character is to be printed on a line, and the second integer specifies
the number of lines that are to be printed. Write a program that makes use of
this function.*/
#include<stdio.h>
void func(char a,int b,int c);
int main()
{
    int i,j;
    char o;
    printf("Enter a character:");
    scanf("%c",&o);
    printf("Enter the number of times:");
    scanf("%d",&i);
    printf("Enter the number of lines:");
    scanf("%d",&j);    
    func(o,i,j);
}
void func(char a,int b,int c)
{
    int k,l;
    for(k=0;k<c;k++)
    {
        for(l=0;l<b;l++)
        {
            printf("%c",a);
        }
        printf("\n");
    }
}