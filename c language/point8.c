#include <stdio.h>

int show();
int showadd(int);
int (*arr[3])();
int (*(*ptr)[3])();

int main()
{

	int result1;
	int (*arr[3])() = {show, showadd};
	ptr = &arr;
	result1 = (**ptr)();
	printf("Printing the value returned by show : %d", result1);
	(*(*ptr+1))(result1);
	return 0;
}

int show()
{

	int a=65;
	return a++;

}

int showadd(int b)
{
	printf("\nAdding 90 to the value returned by the show : %d\n", b+90);
	return 0;
}
