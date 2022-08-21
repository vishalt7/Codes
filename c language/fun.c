#include <stdio.h>

// DECLARATION OF METHODS

void printname();
int getval();
void addnum(int a, int b);

int main()

{

	int x, y;
	printf("Calling first function....\n");
	printname();

	printf("Calling second function....\n");
	int val = getval();
	printf("Value returned by second function is %d\n", val);
	printf("Another value returned by second function is %d\n", getval());

	printf("Calling third function....\n");
	addnum(34, 89);
	printf("Enter first values : ");
	scanf("%d", &x);

	printf("Enter second values : ");
        scanf("%d", &y);

	printf("Again calling third function....\n");
	addnum(x,y);
	return 0;
}

void printname()
{

	printf("My name is Vishal. \n");

}

int getval()
{

	return 100;

}


void addnum(int x, int y)
{

	printf("%d\n", x+y);

}
	
