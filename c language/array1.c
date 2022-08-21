#include <stdio.h>

int main()
{

	int i, n, arr[250];
	
	printf("Enter the number of elements in the array : ");
	scanf("%d", &n);

	for(i=0; i<n; i++)
	{
		printf("arr[%d] =  ", i);
		scanf("%d", &arr[i]);
	}

	printf("The array elements are : ");
	for(i=0; i<n; i++)
		printf("\t %d", arr[i]);

	return 0;

}
		  
