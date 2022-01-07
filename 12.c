/*Write a program that converts time in minutes to time in hours and minutes.
Use #define or const to create a symbolic constant for 60. Use a while loop
to allow the user to enter values repeatedly and terminate the loop if a value
for the time of 0 or less is entered.*/
#include<stdio.h>
#include<conio.h>
int const mul_p= 60;

int main()
{   int tm; 
    
    printf("Enter the time in minutes: \n");
    scanf("%d",&tm);
    while (tm > 0)
    {
        printf("%d minutes is %d hours and %d minutes.\n",tm, tm / mul_p, tm % mul_p);
        printf("Enter the next number of minutes (<=0 to quit): ");
        scanf("%d", &tm);
    }
    printf("Done\n");
    getch();
    return 0;
}
