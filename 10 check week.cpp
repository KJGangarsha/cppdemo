//10 wap to display week name 
#include<stdio.h>
#include<conio.h>
main()
{
	int day;
	scanf("%d",&day);
	switch(day)
	{
		case 1:
			printf("Sunday");
			break;
			case 2:
				printf("Monday");
				break;
				case 3:
					printf("tuesday");
					break;
					case 4:
						printf("wednesday");
						break;
						case 5:
							printf("Thursday");
							break;
							case 6:
								printf("Friday");
								break;
								case 7:
									printf("Saturday");
									break;
									default:
										printf("Invalid");	
	}
	getch();
}
