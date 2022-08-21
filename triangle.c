#include <stdio.h>


int main()

{

	float a, b, c;
	
    
    while(1!=0)
    {
	printf("Enter sides of triangle : \n");
	
	printf("Enter 1st side : ");
	scanf("%f", &a);
		
	printf("Enter 2nd side : ");
        scanf("%f", &b);

	printf("Enter 3rd side : ");
        scanf("%f", &c);
        
        if((a!=0 && b!=0 && c!=0) && ((a<(b+c)) && (b<(a+c)) && (c<(a+b))))
        {
            if(a!=b && b!=c  &&  c!=a)
            {
                printf("The obeserved triangle is a scalene triangle. \n");
            }

            else if(a==b==c)
            {
                printf("The obeserved triangle is equilateral triangle. \n");
            }
	
            else
            {
                printf("The obeserved triangle is an isosceles triangle.\n");
            }
        }
        
        else
            printf("Wrong Input! Please try again");
    }
	return 0;
}
