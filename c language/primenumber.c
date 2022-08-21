#include <stdio.h>

int main()

{

	int num, i=1, j, k, count=0;

	printf("Enter desired number : ");
	scanf("%d", &num);

	// for(i=1; i<=num; i++)
	// {
	// 	if((num%i)==0)
	// 	{
	// 		count++;
	// 	}
	// }

	while((num >= i))
	{
		if((num % i) == 0)
		{
			count++;
		}	
		i++;
	}

	printf("%d\n", count);

	if(count>2)
	{
		printf("%d is not a prime number.\n", num);
	}	

	else
	{
		printf("%d is a prime number.\n", num);
	}
	
			
	return 0;
}
	
