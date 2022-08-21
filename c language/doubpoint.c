#include <stdio.h>

int main()

{

	int a = 10;
	int *p;
	int **pp;
	p = &a;  //pointer p is pointing to the address of a
	pp = &p; //pointer pp is pointing to the address of p

	printf("Address of a : %p\n", p);
	printf("Address of p : %p\n", pp);
	printf("Value stored at p : %d\n", *p);
	printf("Value stored at pp : %d\n", **pp);
	printf("Value stored at pp : %p\n", *pp);
	
	return 0;

}

