/*WAP to take two numbers as an input and perform the operations: Addition,
Subtraction, Multiplication and Division.*/
#include<stdio.h>
#include<conio.h>
int main()
{	float a,b,add,mul,sub;
	float div;
	
	
    printf("Enter two no. simultanously:");
    scanf("%f \t%f",&a,&b);
    add = a+b;
	sub = a-b;
	mul = a*b;
	div = a/b;
	printf("The Addition of %f & %f is: %f\n",a,b,add); 
    printf("The Subtraction of %f & %f is: %f\n",a,b,sub);
    printf("The multiplication of %f & %f is: %f\n",a,b,mul);
    printf("The Division of %f & %f is: %f\n",a,b,div);
	getch();
	
	return 0;
}
    
