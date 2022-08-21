#include <stdio.h>

int main()
{

	int i, n, j;

	printf("Enter number of rows : ");
	scanf("%d", &n);

	

	for(i=0; i<n; i++)
	{

		printf(" ");

		for(j=0; j<n; j++)
		{

			printf("*");

		}

		printf("\n");

	}

	return 0;

}
