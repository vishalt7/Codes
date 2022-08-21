#include <stdio.h>

int main()
{
	int i, n, arr[250];
	float sum, mean;
	
	printf("Enter the number of elements you want to enter in the array : ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		printf("arr[%d] : ", i);
		scanf("%d", &arr[i]);
	}

	for(i=0; i<n; i++)
	{
		sum+=arr[i];
	}

	mean = sum/n;

	printf("The sum of the array elements are : %.2f\n", sum);
	printf("The mean of the array elements are : %.2f\n", mean);
	
	return 0;
}

