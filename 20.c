/*Write a program that reads input until encountering the # character and then
reports the number of spaces read, the number of newline characters read,
and the number of all other characters read.*/
#include<stdio.h>
int main()
{
	int space ,newline, character;
	char ch;
	
	printf("Enter the input (# to end input): ");
	while((ch = getchar()) != '#'){
		switch(ch){
			case ' ':
				space = space + 1;
				break;
			case '\n':
				newline = newline + 1;
				break;
			default:
					character = character + 1;
		}
	}
	
	printf("Input contains \n%d spaces \n%d newlines \n%d characters",space,newline,character);
	return 0;
}
