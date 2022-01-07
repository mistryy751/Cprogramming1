/*Write a program that converts your age in years to days and displays both
values. At this point, don't worry about fractional years and leap years.*/
#include <stdio.h>
#include <conio.h>

int main() 
{
	int age,days;
	printf("Enter the age:");
	scanf("%d",&age);
	
    days = age * 365;

    printf("My age in years is %d\n", age);
    printf("My age in days is %d\n", days);

    return 0;
}
