/*WAP to evaluate the area and perimeter of the rectangle.*/
#include<stdio.h>
#include<conio.h>
int main()
{	float l,w,area,per;
	
	
    printf("Enter Length & Width simultanously:");
    scanf("%f %f",&l,&w);
    area = l*w;
    per=  2*(l+w);
    printf("Area=%f\n",area);
    printf("perimeter=%f",per);
    getch();
    
    return 0;
}
