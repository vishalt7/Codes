#include <stdio.h>

int main()

{

	int number = 50;
	int *p;
	p = &number;

	printf("Address of number variable is %p.\n", p);
	printf("Address of p variable is %p.\n", &p);
	printf("Value of number variable is %d.\n", *p);
	

	return 0;

}
