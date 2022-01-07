/*WAP to merge two files and write it in a new file.*/
#include<stdio.h>
int main()
{
    FILE *fp1,*fp2,*fp3;
    char ch;
    fp1 = fopen("frontend.txt","r");
    fp2 = fopen("backend.txt","r");
    fp3 = fopen("fullstack.txt","w");
    while((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch,fp3);
    }
    while((ch = fgetc(fp2)) != EOF)
    {
        fputc(ch,fp3);
    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    return 0;
}
