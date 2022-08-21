#include <stdio.h>
int main()
{
	int a=5, b=7;

	if(a<=5 && b>=9)  // (  && refers to AND Logical Operator.)
	{
		printf("Hello!\n");
	}
	else 
	{
		printf("Bye!\n");
	}


	if(a<=5 || b>=9)       // (  || refers to OR Logical Operator.)
	{
		printf("Hello!\n");
	}
	else
	{
		printf("Bye!\n");
	}


	if(!(a<=5) || b>=9)
	{
		printf("Hello!\n");
	}
	else 
		printf("Bye!\n");

	return 0;

}
