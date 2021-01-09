//7 Wap to define leap year or not
#include<stdio.h>
#include<conio.h>
main()
{
	int year;
	printf("please enter year:");
	scanf("%d",&year);
	if (year%4==0)
	{
	printf("Its a leap year");
	}
	else
	{
	printf("Its not a leap year");
	}
	getch();
}
