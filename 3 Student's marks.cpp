// 3 Wap to calculate student's marks
#include<stdio.h>
#include<conio.h>
main()
{
	float marks_in_sports,marks_in_culturals,marks_in_exam,total_marks;
	printf("Enter sports marks:");
	scanf("%f",&marks_in_sports);
	printf("\nEnter Cultural marks:");
	scanf("%f",&marks_in_culturals);
	printf("\nEnter marks in exam:");
	scanf("%f",&marks_in_exam);
	total_marks=(marks_in_sports*30+marks_in_culturals*20+marks_in_exam*50)/100;
	printf("\nTotal marks obtained=%f",total_marks);
	getch();
}
