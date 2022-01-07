/*WAP to remove a file from the disk.*/
#include<stdio.h>
int main()
{
    char filename[20];
    printf("Enter the file name: ");
    scanf("%s",filename);
    remove(filename);
    printf("File deleted successfully");
    return 0;
}