#include <stdio.h>

int main()
{

	int a = 50;
	int *p = &a;

	printf("P pointer stores %p address of a\n", p);
	printf("P pointer stores %d value of a\n", *p);

	return 0;

}
