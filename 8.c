/*Write a program that asks you to enter an ASCII code value, such as 66, and then prints the character having that ASCII code.*/
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a ASCII value(0 to 255):\n");
    scanf("%d", &num);
    printf("Equivalent Character: %c", num);
    return 0;
}