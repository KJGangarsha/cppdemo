//9 Wap to find largest of 3 numbers
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	printf("provide 3 nums:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("%d is large.",a);
	}
	else if(b>a && b>c)
	{
		printf("%d is large.",b);
	}
	else
	printf("%d is large.",c);
	getch();
}
