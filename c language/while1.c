#include <stdio.h>

int main()

{

	int num, n; 
	int arm=0, rev=0, sum=0, b;

	printf("Enter number : ");
	scanf("%d", &num);
	
	n=num;

	while(n>=1)

	{

		b=n%10;
		arm+=b*b*b;
		sum+=b;
		rev=(rev*10)+b;
		n=n/10;
	}

	
	if(num==arm)
		
		printf("%d is an armstrong number\n", arm);

	else

		printf("%d is not an armstrong number\n", arm);

	printf("The sum of digits of %d is %d.\n", num,  sum);

	printf("%d in Reverse Order is %d\n", num, rev);


	if(rev==num)
	
		printf("%d is a palindrome number.\n", num);

	else

		printf("%d is not a palindrome number.\n", num);

	return 0;


}
