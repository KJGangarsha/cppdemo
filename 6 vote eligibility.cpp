//6 wap to know whether user is eligible to vote or not
#include<stdio.h>
#include<conio.h>
main()
{
	int age;
	printf("Provide your Age:");
	scanf("%d",&age);
	if(age>18)
	{
		printf("\nYou are eligible to vote");
	}
	else
	{
		printf("\nYou are not eligible to vote");
	}
	getch();
}
