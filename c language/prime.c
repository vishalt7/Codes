#include <stdio.h>

int main()

{

	// To find prime number between given range by user.

	int a, b, i, j, flag;

	printf("Enter lower bound number : ");
	scanf("%d", &a);

	printf("Enter upper bound number : ");
	scanf("%d", &b);

	printf("Prime number between %d and %d are : \n", a, b);
	for(i=a; i<=b; i++)
	{

		if(i==0 || i==1)
			continue;

		flag = 1;

		for(j=2; j<=i/2; ++j)
		{
		
			if(i%j==0)
			{

				flag = 0;
				break;
			}
			
		}


		if(flag==1)
		{

			printf("%d", i);
			printf("\n");
		}

	}

	return 0;

} 
