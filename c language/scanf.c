#include <stdio.h>

int main()
{
	int a; float f; char c, ch[10];
	
	printf("Enter an integer : ");
	scanf("%d", &a);
	printf("Integer you entered is %d.\n", a);


	printf("\nEnter a float value : ");
	scanf("%f", &f);
	printf("Float value you entered is %f.\n", f);


	printf("\nEnter a character : ");
	scanf(" %c", &c);
	printf("Character you entered is %c.\n", c);

	
	printf("\nPlease enter your name : ");
	scanf("%s", ch);
	printf("Your good name is %s.\n", ch);

}
