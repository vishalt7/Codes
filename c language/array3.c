#include <stdio.h>

int main()
{
	int i, j, pos=0,  n, arr[250], small=arr[0];
	
	printf("Enter the number of elements you want to enter in the array : ");
	
	for(i=0; i<n; i++)
	{
		printf("  ");
		scanf("%d", arr[i]);
	}

	for(i=0; i<n; i++)
	{
		for(j=1; j<n; j++)
		{
			if(arr[i]>arr[j]
