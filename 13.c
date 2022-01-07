/*Print the following patterns using loops:
a. 
$
$$
$$$
$$$$
$$$$$

b. 
F
FE
FED
FEDC
FEDCB
FEDCBA
*/

#include<stdio.h>
#include<conio.h>
int p1(int);
int p2(int);

int main()
{
    int n,n1;
    printf("Enter the NO. Of Line:");
    scanf("%d",&n);
    printf("Choose type of pattern \n");
    printf("For $ type press 1\n for FEDB type press 2 ");
    scanf("%d",&n1);

    if(n1==1)
    {
        p1(n);
    }
    else if(n1==2)
    {
        p2(n);
    }
    else{
        printf("Choose valid option");
    }
 
   return 0;

}
int p1(int n)
{int i,j;
for (i = 1; i <= n; i++)
{
    for (j = 1; j <= i; j++)
    {
        printf("$ ");
    }
    printf("\n");
}
return 0;
}

int p2(int n)
{   int i,j;
    i = n;
    while (i >= 1)
    {
        j = i;
        while (j <= n)
        {
            printf("%c", 'A' + j - 1);
            j++;
        }
        i--;
        printf("\n");
    }
}
