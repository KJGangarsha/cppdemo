//2 Area and Perimeter of square and rectangle
#include<stdio.h>
#include<conio.h>
main()
{
	int side,length,breadth,area,perimeter;
	printf("Please enter side of square: ");
	scanf("%d",&side);
	area=side*side;
	perimeter=4*side;
	printf("\nArea of square=%d",area);
	printf("\nPerimeter=%d",perimeter);
	printf("\nenter l and b: ");
	scanf("%d%d",&length,&breadth);
	area=length*breadth;
	perimeter=2*(length+breadth);
	printf("\nArea of rectangle=%d",area);
	printf("\nPerimeter=%d",perimeter);
	getch();
}
