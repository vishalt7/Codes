#include <stdio.h>

int main()

{

	int number=50;
	int *p;
	p=&number;
	printf("\n\nAddress of number variable in memory is %p.\n\n", p);
	
	p=p+3;

	printf("After adding 3: Address stored in p variable is %p and value stored in it is %d\n", p, *p);

	return 0;

}

