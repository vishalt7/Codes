#include <stdio.h>

int main()

{

	int a=10, b=20, *p1=&a, *p2=&b;

	printf("Before swap : *p1=%d *p2=%d\n", *p1, *p2);
	
	*p1=*p1+*p2;
	
	printf("Now *p1 is %d.\n", *p1);

	*p2=*p1-*p2;

	printf("Now *p2 is %d.\n", *p2);

	*p1=*p1-*p2;

	printf("\nAfter Swap: *p1=%d *p2=%d\n", *p1, *p2);

	return 0;

}
