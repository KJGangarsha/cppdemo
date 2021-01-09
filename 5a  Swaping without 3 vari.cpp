//5a wap to swap numbers without 3 variable
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	a=10;
	b=20;
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swaping a=%d,b=%d",a,b);
	getch();
}
