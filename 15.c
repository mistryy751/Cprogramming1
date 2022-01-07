/*Write a C program to input n numbers in an array, calculate the sum of all
even numbers and all odd numbers in the array and print the larger sum.
Example: If the array contains the following elements: 2, 3, 3, 5, 4, 8, 7, 11,
2 The sum of all even elements is 2+4+8+2=16 Sum of all odd elements is
3+3+5+7+11=29 Therefore, the output should be 29.*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int Size, i, j = 0,*ar;
    int Even_Sum = 0, Odd_Sum = 0;

    printf("\n Please Enter the Size of an Array : ");
    scanf("%d", &Size);
    ar = (int *)malloc(sizeof(int) * Size);
    printf("\nPlease Enter the Array Elements\n");
    for (i = 0; i < Size; i++)
    {
        scanf("%d", &ar[i]);
    }
    while (j < Size)
    {
        if (ar[j] % 2 == 0)
        {
            Even_Sum = Even_Sum + ar[j];
        }
        else
        {
            Odd_Sum = Odd_Sum + ar[j];
        }
        j++;
    }
    printf("\n The Sum of Even Numbers in this Array = %d ", Even_Sum);
    printf("\n The Sum of Odd Numbers in this Array = %d ", Odd_Sum);
    if (Even_Sum>Odd_Sum)
    {
        printf("\nSo the larger sum is:%d", Even_Sum);
    }
    else 
    {
        printf("\nSo the larger sum is:%d", Odd_Sum);
    }
    getch();
    return 0;
}
