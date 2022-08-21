#include <stdio.h>

int main()
{

	int i, j, n, temp=0;

	printf("Enter number of elements you want to enter in an array : ");
	scanf("%d", &n);

	int a[n];

	for(i=0; i<n; i++)
	{
		printf("Enter %d element : ", i+1);
		scanf("%d", &a[i]);
	}
	
	i = 0;

	printf("Elements before sorting : [");
	for(i=0; i<n; i++)
	{
		printf("%d ", a[i]);

	}

	printf("]\n");
        
	i = 0;
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n-i-1; j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}

		}

	}

	printf("Elements after sorting : [ ");
	for(j=0; j<n; j++)
		printf("%d ", a[j]);

	printf("]\n");

	return 0;

}
