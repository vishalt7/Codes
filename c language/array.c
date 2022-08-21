#include <stdio.h>

int main()
{

	int arr[5], arr2[20], lt, lt1, lt2, i, j, k, even=0, odd=0, great=0;
	int arr3[3][2];
	int arr5[20][20];
	

	int marks[4]={67, 87, 56, 77};
	int arr4[3][4]={{34, 56, 45, 23}, {12, 78, 22, 89}, {34, 89, 66, 26}};

	float area[5]={ 23.4, 6.8, 5.5, 6.7, 23.4};
		
	int arr6[2][3][2];

	int arr7[2][3][2]={{{11,22}, {33, 44}, {44, 55}}, { {66, 77}, {88, 99}, {12, 13}}};

	int arr8[20][20][20];

	arr[2] = -10;
	arr[3/2] = 2;
	arr[3] = arr[0];
	arr[8/2] = 7;

	printf("%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
	
	for(i=0; i<4; i++)

	{

		printf("The value of %d index is %d\n", i, marks[i]);

	}

	return 0;

}
