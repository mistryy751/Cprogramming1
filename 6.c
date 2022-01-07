/*WAP to calculate HCF and LCM of two numbers.*/
#include <stdio.h>
#include <conio.h>
//Function Declaration
long hcf1(long , long );
int main()
{
    long x, y, hcf, lcm;

    printf("Enter two integers\n");
    scanf("%ld%ld", &x, &y);

    hcf = hcf1(x, y);
    lcm = (x * y) / hcf;

    printf("Greatest common divisor of %ld and %ld = %ld\n", x, y, hcf);
    printf("Least common multiple of %ld and %ld = %ld\n", x, y, lcm);
    getch();
    return 0;
}
//Function implementaion for Highest Common Factor

long hcf1(long x, long y)
{
    if (y == 0)
        return x;
    else
        return hcf1(y, x % y);
}

    

