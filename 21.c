/*Write a program that accepts an integer as input and then displays all the
prime numbers smaller than or equal to that number.*/
#include <stdio.h> 
int main()
{
	int num,i,count,j;
	printf("Enter Number: ");
	scanf("%d",&num);	
	printf("Prime Numbers smaller than or equal to %d are\n",num);
	for(i=1; i<=num; i++)
	{
		count = 0;
		for(j=1;j<=i;j++)
		{
			if(i%j == 0)
			{
				count++;				
			}
		}
		if(count==2)
		{
			printf("%d ",i);
		}
	}
	printf("\n");
	return 0;
}
