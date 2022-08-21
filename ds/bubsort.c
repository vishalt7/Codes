#include<stdio.h>
#include<conio.h>

int main()
{
int i,a[100],temp,j,no,k;
printf("How many no. do u want to insert: ");
scanf("%d",&no);
printf("\nEnter any %d num in array \n",no);

for(i=0;i<no;i++)
{
scanf("%d",&a[i]);
}
printf("\n\n\nData before sorting : ");
for(j=0;j<no;j++)
{
printf("  %d",a[j]);
}
for(i=0;i<no;i++)
{
for(j=0;j<no-i-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("\n\n\nData after sorting : /n");
for(j=0;j<no;j++)
{
printf("  %d",a[j]);
}

printf("Press enter to end the program");
scanf("%d",&k);
return 0;
}
