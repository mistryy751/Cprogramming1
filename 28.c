/*WAP in C to append multiple lines at the end of the text file.*/
#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("input.txt","a");
    printf("Enter the lines to be appended: ");
    while((ch = getchar()) != '\n')
    {
        fputc(ch,fp);
    }
    fclose(fp);
    return 0;
}