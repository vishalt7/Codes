#include <stdio.h>
#include <stdlib.h>

void create(int);
void addatbeg(int);
void addafter(int, int);
void del(int);
void search(int);
void display(int);

struct node;
{

	int info;
	struct node *link;
} *start;

int main()
{

	int ch, n, m, position, i;

	while(1)
	{

		printf("1. Create List\n");
                printf("2. Add at beginning\n");
                printf("3. \n");
                printf("4. \n");
                printf("5. Display\n");
                printf("6. \n");
                printf("7. \n");
                printf("Enter yout choice : ");
		scanf("%d", &ch);
		
		switch(ch)
		{

			case 1:
			start = NULL;
			printf("How many nodes : ");
			scanf("%d", &n);
			for(i=0; i<n; i++)
			{
				printf("Enter element : ");
				scanf("%d", &m);
				create(m);
			}
			break;

			case 2:
			printf("Enter the element : ");
			scanf("%d", &m);
			addatbeg(m);
			break;

			case 3:
			printf("Enter the element : ");
			scanf("%d", &m);
			printf("Enter the position after which this element is inserted : ");
			scanf("%d", &position);
			addafter(m, position);
			break;
			
			case 4:
			if(start==NULL)
			{
				printf("List is empty\n");
				continue;
			}
			printf("Enter the elements for deletion : ");
			scanf("%d", &m);
			del(m);
			break;
			
			case 5:
			display();
			break;
			
			case 6:
			printf("Enter the elements to be searched : ");
			scanf("%d", &m);
			search(m);
			break;
			
			case 7:
			exit(0);
	
			default: 
			printf("Wrong Choice\n");
			
		}	
	}
}

void create(int data)
{
	sruct node *q, *temp;

	//Since the syntax of malloc function is " void* malloc(sizeof()) ";
	//
	temp = (struct node*)malloc(sizeof(struct node));
	temp->info = data;
	temp->link = NULL;
	
	if (start = NULL)
	{
		start = temp;
	}
	
	else
	{
	
		q=start;
		while(q->link!=NULL)
		{
		
			q=q->link;
		}
		q->link = temp;
		}
}

void addatbeg(int data)
{

	struct node *temp;
	temp = (struct node*) malloc(sizeof(struct node));
	temp->info = data;
	temp->link = start;
	start = temp;
}
	
void addafter(int data, int pos)
{
	struct node *temp, *q;
	int i;
	q=start;
	for(i=0; i<pos-1; i++)
	{
		q = q->link;
		if(q==NULL)
		{
			printf("There are less than %d elements. ", pos);
			return;
		}
	}
	temp = (struct node*) malloc(sizeof(struct node));
	temp->link = q->link;
	temp->info = data;
	q->link = temp;
}

void del(int data)
{

	struct node *temp, *q;
	if(start->info ==data)
	{
		temp = start;
		start = start->link;
		free(temp);
		return;
	}

	q = start;
	while(q->link->link!=NULL)
	{
		if(q->link->info == data)
		{	
			temp=q->link;
			q->link = temp->link;
			free(temp);
			return;
		}
	q = q->link;
	}
	
	if(q->link->info==data)
	{
		temp=q->link;
		free(temp);	
		q->link=NULL;
		return;
	}

	printf("Elements %d not found\n", data);
}


void display()
{

	struct node *q;
	if(start == NULL)
	{
		printf("list is empty\n);
		return;
	}
	
	q=start;
	printf("List is : \n");
	while(q!=NULL)
	{
	
		printf("%d", q->info);
		q=q->link;
	}
	printf("\n");
}

void search(int data)
{
	struct node *ptr=start;
	int pos=1;
	while(ptr!=NULL)
	{
		if(ptr->info=data)
		{
			printf("Item %d found at %d\n", data, pos);
			return;
		}
		
		ptr=ptr->link;
		pos++;
	}
	
	if(ptr==NULL)
	{
		printf("Item %d is not found\n", data);
	}
}	
