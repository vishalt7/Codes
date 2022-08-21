#include <stdio.h>

int main()

{

	int arr[5]={1, 2, 3, 4, 5};
	int *p = arr;
	int i;
	
	printf("\n%p\n\n", &arr[0]);
	printf("Printing array elements...\n");

	for(i=0; i<5; i++)
	{
	
		printf("%p : ", (p+i));
		printf("%d\n", *(p+i));

	}

	return 0;

}	
