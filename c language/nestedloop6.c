#include <stdio.h>

int main()

{

	int i, j, k;

	for(i=1; i<=10; i++)

	{

		for(j=i; j<=10; j++)

		{

			printf(" ");

		}

		for(k=2; k<=(2*i); k++)
		{

			if(((i>2 && k>=4) && (i<7 && k<=(2*i-2))) || ((i>=9 && k>=4) && (i<=10 && k<(2*i-1)))) 
			{

			printf(" ");

			}	


			else
			{

				printf("*");

			}

		}


		printf("\n");

	}

	return 0;

}
