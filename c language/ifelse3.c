#include <stdio.h>

int main()

{

	int day=0;

	printf("Enter number from 1-7 : ");
	scanf("%d", &day);
	
	if(day==1)
	{
		printf("Sunday\n");
	}

	else if(day==2)
	{
		printf("Monday\n");
	}

	else if(day==3)
	{
		printf("Tuesday\n");
	}

	else if(day==4)
	{
		printf("Wednesday\n");
	}

	else if(day==5)
	{
		printf("Thursday\n");
	}

	else if(day==6)
	{
		printf("Friday\n");
	}

	else if(day==7)
	{
		printf("Saturday\n");
	}

	else 
	printf("You entered wrong number.\nEnter number between 1-7.\n");

	return 0;

}
