#include <stdio.h>

union Data{
	int i;
	float f;
	char str[20];
};

struct Data2{
	int i;
	float f;
	char str[20];
};


int main()
{

	union Data data;
	struct Data2 data2;

	//int j; float k; char str[20];
	//printf("%lu", sizeof(j));
	//printf("%lu", sizeof(k));
	//printf("%lu", sizeof(str[20]));

	printf("Memory size occupied by union : %lu\n", sizeof(data));
	printf("Memory size occupied by structure : %lu\n", sizeof(data2));

	return 0;

}
