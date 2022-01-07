/*Write a program in C to find the content of the file and number of lines in a
Text File.*/
#include<stdio.h>
int main()
{
    FILE *fp;
    int ch,count=0;
    fp=fopen("input.txt","r");
    while((ch=fgetc(fp))!=EOF)
    {
        if(ch=='\n')
        {
            count++;
        }
    }
    printf("The number of lines in the file is %d",count);
    fclose(fp);
    return 0;
}
