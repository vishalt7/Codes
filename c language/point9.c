#include <stdio.h>

void swap(int *n1, int *n2);

int main()
{

	int num1=5, num2=10;
	printf("Before Swap :\n");
	printf("Number1 = %d\n", num1);
        printf("Number2 = %d\n", num2);
	
	swap(&num1, &num2);

	
	printf("After Swap :\n");
	printf("Number1 = %d\n", num1);
	printf("Number2 = %d\n", num2);
	return 0;

}

void swap(int *n1, int *n2)
{

	int temp;
	//printf("Address of pointer before swapping : \n");
	//printf("Adress of pointer n1 %p\n", n1);
	//printf("Adress of pointer n2 %p\n", n2);
	temp = *n1;
	//printf("Address of pointer after swapping : \n");
	//printf("\n\n%p\n", &temp);
	//printf("Adress of pointer n1 %p\n", n1);
	*n1 = *n2;
	//printf("Adress of pointer n1 %p\n", n1);
	//printf("Adress of pointer n2 %p\n", n2);
	*n2 = temp;;
	//printf("Adress of pointer n2 %p\n", n2);









}
