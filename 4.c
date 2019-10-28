#include<stdlib.h>
#include<stdio.h>

struct node
	{
		int data;
		struct node *pointer;
    };
int print(struct node* start);
void deletenext(struct node* prev);
int main()
{
	int n;
	scanf("%d",&n);
	struct node *temp,*current;
	struct node *start;
	struct node *first=malloc(sizeof(struct node));
	start=NULL;
	if(n>0)
	{
		scanf("%d",&first->data);
		start=first;
		temp=first;
	}
	else
	{
		printf("NULL\n");
		return 0;
	}
	
	for(int i =1;i<n;i++)
	{
		current=malloc(sizeof(struct node));
		temp->pointer=current;
		temp=current;
		scanf("%d",&current->data);
		current->pointer=NULL;
	}
	
	print(start);
	struct node* prev;
	struct node* next;
	prev=start;
	next=prev->pointer;
	do
	{
		if(start->data%2!=0)
		{
			start=start->pointer;
			if(start==NULL)
			{
				break;
			}
			if((start->pointer==NULL)&&(start->data%2!=0))
			{
				start=NULL;
				break;
			}
			
			prev=start;
			next=start->pointer;
			continue;
		}
		if((next!=NULL)&&(next->data%2!=0))
		{
			
			deletenext(prev);
			
		}
		prev=prev->pointer;
		if(prev!=NULL)
		{
			if((prev->pointer==NULL)&&(prev->data%2!=0))
				
			next=prev->pointer;
			
			}
		else
			break;
	}while(next!=NULL);
	printf("\n");
	print(start);
    return 0;		
}
int print(struct node* start)
{
	struct node* i;
	i=start;
	if(start==NULL)
	{
		//printf("NULL");
		return 0;
	}
	while(i!=NULL)
	{
		printf("%d",i->data);
		i=i->pointer;
		printf("-->");
		if(i==NULL)
		{
		  printf("NULL");
		}
	}
	return 0;
}
void deletenext(struct node* prev)
{		
	struct node* current;
	current=prev->pointer;
	prev->pointer=current->pointer;

}
