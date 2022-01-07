/*Write a program that shows you a menu offering you the choice of addition,
subtraction, multiplication, or division. After getting your choice, the
program asks for two numbers, then performs the requested operation. The
program should accept only the offered menu choices. It should use type
float for the numbers and allow the user to try again if he or she fails to enter
a number. In the case of subtraction, the program should prompt the user to
enter a new value if 0 is entered as the value for the second number*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	float num1,num2;
	int choice;
	
	while(1)
	{
		printf("Menu");
		printf("\n1.Addition \n2.Subtraction \n3.Multiplication \n4.Division \n5.Exit");		
		printf("\nEnter Your Choice:");
		scanf("%d",&choice);
		
		if(choice>0 && choice<6)
    {
    if (choice==1)
        {
            printf("\n Enter 1st number: ");
            scanf("%f",&num1);
            printf("\n Enter 2nd number: ");
            scanf("%f",&num2);
            printf("\n %f + %f = %f",num1,num2,num1+num2);
        }
    if (choice==2)
        {
            printf("\n Enter 1st number: ");
            scanf("%f",&num1);
            printf("\n Enter 2nd number: ");
            scanf("%f",&num2);
            printf("\n %f - %f = %f",num1,num2,num1-num2);
        } 
    
    if (choice==3)
        {
            printf("\n Enter 1st number: ");
            scanf("%f",&num1);
            printf("\n Enter 2nd number: ");
            scanf("%f",&num2);
            printf("\n %f * %f = %f",num1,num2,num1*num2);
        } 
     
    
    if (choice==4)
        {
            printf("\n Enter 1st number: ");
            scanf("%f",&num1);
            printf("\n Enter 2nd number: ");
            scanf("%f",&num2);
            if(num2==2)
            printf("\n Denominator cannot be zero");
            else
            {
                printf("\n %f / %f = ",num1,num2);
                printf("%f",num1/num2);
            }
        }
    if(choice==5)
        exit(0);
    }            
    else 
		printf("\n Enter Valid Choice");
	}
	return 0;
}
