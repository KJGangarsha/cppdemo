//8 Wap to print sal adding bonus to male and female using nested if else
#include<stdio.h>
#include<conio.h>
main()
{
	char gender;
	int bonus, sal;
	printf("Are you male or female:");
	scanf("%c",&gender);
	printf("Please enter ur salary:");
	scanf("%d",&sal);
	if(sal<10000)
	{
		if(gender=='M')
		{
			bonus=(7*sal)/100;
			sal=sal+bonus;
			printf("Ur salary=%d",sal);
		}
		else if(gender=='F')
		{
			bonus=(12*sal)/100;
			sal=sal+bonus;
			printf("Ur salary=%d",sal);
		}
		else
			printf("Invalid choice");
	}
	else
	{
		if(gender=='M')
		{
			bonus=(5*sal)/100;
			sal=sal+bonus;
			printf("Ur salary=%d",sal);
		}
		else if(gender=='F')
		{
			bonus=(10*sal)/100;
			sal=sal+bonus;
			printf("Ur salary=%d",sal);
		}
		else
			printf("Invalid choice");
	}
	getch();
}
