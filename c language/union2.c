#inlcude <stdio.h>

union Data{
	int i;
	float f;
	char str[20];
};

int main()
{

	union Data data;
	
	data.i = 10;
	printf("data.i : %d\n", data.i);
	data.f = 220.5;
	printf("data.f : %d\n", data.f);
	strcpy(data.str, "C programming");
	printf("data.str : %s\n", data.str);

	printf("data.i : %d\n", data.i);
	printf("data.f ; %d\n", data.f);
