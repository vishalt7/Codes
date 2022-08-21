#include <stdio.h>

int main()

{

	int num1, num2, num3, great;

	printf("Enter 3 numbers below : \n");

	printf("1st Number : ");
	scanf("%d", &num1);

	printf("2nd Number : ");
	scanf("%d", &num2);

	printf("3rd Number : ");
	scanf("%d", &num3);

	if(num1>num2 && num1>num3)
	{
	
		great = num1;
		printf("Greatest number is %d\n", great);
	}

	else if(num2>num1 && num2>num3)
	{

		great = num2;
		printf("Greatest number is %d\n", great);
	}

	else
	{

		great = num3;
		printf("Greatest number is %d\n", great);
		printf("\n");

	}

	return 0;

}
