/*Take the price and quantity of items as an input. Write a C function to
calculate the sum of the prices. Write another C function to calculate the
discount according to the following rules: For a total less than Rs.1000,
discount is 5%. For a total greater than Rs.1000 but less than Rs.5000,
discount is 10%. For a total greater than Rs.5000, discount is 15%. Write
another function to print the individual item prices, total, discount and the
final price.*/
#include<stdio.h>
#include<conio.h>
int dis(int);
int final(int,int,int);
int main()
{
int price, quant,sum1;
printf("enter price and qunatity of items: \t");

scanf("%d  %d ", &price, &quant);

sum1=price * quant;
dis(sum1);

return 0;

}

//Function for calculate discount
int dis(sum1)
{
    int sum,di;

if( sum< 1000)

{
            di = (sum * 5) / 100;

            sum = sum - di;

}

else if(sum>1000 && sum<5000)

{
            di = (sum * 10) / 100;

            sum = sum - di;

}

else if( sum>5000)

{
            di = (sum * 15) / 100;

            sum = sum - di;

}
final(di,sum,sum1);
return di,sum;

}

//Function for Final Display
int final (sum1,sum,di)
{


printf(" total price %d \n", sum1);
printf ("final price =%d  discount=%d", sum, di);
return 0;

}
    
    