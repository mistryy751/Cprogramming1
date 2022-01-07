
/*Write a file copy program that prompts the user to enter the name of a text
file to act as the source file and the name of an output file. The program
should use the toupper() function from ctype.h to convert all text to
uppercase as it's written to the output file. Use standard I/O and the text
mode.*/
#include<stdio.h>
#include<ctype.h>
int main()
{
    FILE *fp1,*fp2;
    char ch;
    fp1=fopen("input.txt","r");
    fp2=fopen("output.txt","w");    
    while((ch=fgetc(fp1))!=EOF)
    {
        fputc(toupper(ch),fp2);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}

