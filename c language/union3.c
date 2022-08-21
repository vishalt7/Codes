#include <stdio.h>

union job{
	char name[32];
	float salary;
	int workerNo;
}job1;

int main()
{

	printf("Enter name : \n");
	scanf("%[^\n]%*c", job1.name);

	printf("Displaying :\nName : %s\n", job1.name);
	
	printf("Enter salary : \n");
	
	scanf("%f", &job1.salary);

	printf("Salary : %f\n", job1.salary);
	
	return 0;

}
