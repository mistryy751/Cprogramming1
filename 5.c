/*Write a program to evaluate the net salary of an employee given the
following constraints: Basic salary : $ 12000 DA : 12% of Basic salary HRA
: $150 TA : $120 Others : $450 Tax cuts � a) PF :14% of Basic salary and b)
IT: 15% of Basic salary Net Salary = Basic Salary + DA + HRA + TA +
Others � (PF + IT)*/
#include<stdio.h>
#include<conio.h>
int main()
{	double bs,da,hra,others,it,pf,ta,net;
	printf("Enter Your Basic Salary,HRA,TA,Others in $ Simultanously:");
	scanf("%lf %lf %lf %lf", &bs, &hra,&ta,&others);

	da = (bs*12)/100;
	pf = (bs*14)/100;
	it = (bs*14)/100;
	net = bs+da+hra+ta+others - (pf + it);
printf("The Netsalary of Employee is:%lf",net);
	getch();
	return 0;
		
}
