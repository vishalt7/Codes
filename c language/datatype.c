#include <stdio.h>
int main()
{

	int a=1, x=3;
	char b='G';
	double c=3.14;
	long int l=3456;

	printf("Hello World !");
	
	printf("Hello ! I am a character. My value is %c and my size is %lu byte. \n", b, sizeof(char));
	printf("Hello ! I am an integer. My value is %d and my size is %lu byte. \n", a, sizeof(int));
	printf("Hello ! I am a double floating point and my value is %f byte and my size is %lu byte. \n", c, sizeof(double));
	printf("Hello ! I am a long integer. My value is %lu and my size is %lu byte. \n", l, sizeof(long int));

	printf("By ! See you soon :)\n");

	return 0;
}
