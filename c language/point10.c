#include <stdio.h>

int main()

{

	char charArr[4];
	int i, classes[6], sum=0;
	
	for(i=0; i<4; ++i)
	{
	
		printf("Address of charArr[%d] = %p\n", i, &charArr[i]);
	}

	printf("Enter 6 numbers : \n");
	for(i=0; i<6; ++i)
	{
	
		scanf("%d", (classes+i));

		sum+=*(classes+i);

	}

	printf("Sum = %d\n", sum);
	return 0;

}

