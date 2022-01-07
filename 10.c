/*C Program to Check Whether a Character is a Vowel or Consonant.*/
#include <stdio.h>
int main()
{
    char a1;
    printf("Enter the character:");
    scanf("%c",&a1);
    if (a1 == 'i' | a1 == 'e' | a1 == 'a' | a1 == 'o' | a1 == 'u' | a1 == 'I' | a1 == 'E' | a1 == 'O'| a1 == 'A' | a1 == 'U')
    {
        printf("This Is Vowel.");
    }
    else return printf("This Is Consonant");

    return 0;
}
