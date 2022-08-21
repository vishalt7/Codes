#include <stdio.h>

int main()
{

	int number=50;
	int *p=&number;
	
	printf("Address of number variable is %p.\n", p);

	p=p-1;
	
	printf("Address stored in p variable is %p.\n", p);
	printf("Value stored at %p address is %d.\n", p,*p);

	return 0;

}

