//4 Wap to find total money in a Piggie bank  
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d,e;
	printf("please enter no. of 10/- coins: ");
	scanf("%d",&a);
	printf("\nplz enter no. of 5/- coins:  ");
	scanf("%d",&b);
	printf("\nplease enter no. of 2/- coins: ");
	scanf("%d",&c);
	printf("\nplz enter no. of 1/- coins: ");
	scanf("%d",&d);
	e=(10*a)+(5*b)+(2*c)+(1*d);
	printf("\nToatal no. of coins in the piggie bank:%d",e);
	getch();
}
