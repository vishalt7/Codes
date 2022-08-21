#include <stdio.h>

int main()

{

	int number=50;
	int *p;
	p=&number;
	
	printf("Address of p variable is %p.\n", p);

	p=p+1;

	printf("After increment : Address of variable is %p.\n", p);
	return 0;

}
