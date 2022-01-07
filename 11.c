/*Program to find the greatest of three numbers.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    double n1, n2, n3;
    printf("Enter three different numbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    
    if (n1 >= n2 && n1 >= n3)
        printf("%.1f is the largest number.", n1);

    
    if (n2 >= n1 && n2 >= n3)
        printf("%.1f is the largest number.", n2);

    
    if (n3 >= n1 && n3 >= n2)
        printf("%.1f is the largest number.", n3);

    return 0;
}
