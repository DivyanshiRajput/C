/*INPUT: n intergers.
  OUTPUT: printing the integers in the linked list. Also printing the list with only even numbers.*/
#include <stdio.h>
#include <stdlib.h>
struct node //structure for storing the integer and a pointer for linking the list. 
{
	int number;
	struct node* pointer;
};
void printlist(struct node* start)//function for printing the linked list.
{
	struct node* temp=start;
	while (temp!=NULL)
	{
		printf ("%d-->", temp->number);
		temp = temp->pointer;
	}
	printf("NULL");
}
int main()
{
	int n; //number of integers to be taken.
	scanf ("%d", &n);
	struct node* first= (struct node*)malloc(sizeof(struct node));//allocating memory for the first node.
	scanf("%d",&first->number); //taking input of number for the first node.
	struct node* start; //defining starting node.
	struct node* temp; //defining temporary variable to link the nodes.
	start=first;
	temp=first;
	for(int i=1; i<n; i++) //loop for allocating memory for the nodes and for taking integer inputs.
	{
		struct node* current;
		current= malloc(sizeof(struct node));
		scanf ("%d",&current->number);
		temp->pointer=current; //links temporary pointer to current node.
		temp = current;
	}
	printlist(start); //calling printlist function for printing the initial linked list.
	printf("\n");
	struct node* next; 
	struct node* prev=start;// prev stores the previous node of the node to be deleted
	next=prev->pointer; // stores the next node of the current one
	while (next!=NULL)
	{
		if(start->number%2!=0)// if data of start is odd, then move the start forward
		{
			start= start->pointer;
			prev=start;
			next= prev->pointer;
			continue;
		}
		if(next->number%2!=0)// if the current node's data is odd, shift the link of the previous node to the pointer of the next node 
		{
			prev->pointer=next->pointer;
			next= prev->pointer;
		}
		else// if its even, move forward
		{
			prev=next;
			next=next->pointer;
		}
	}
	if(start->number%2!=0)// if list contains a single node, check if its data is odd
                start=NULL;// then empty the list

	printlist(start);// prints the end result
	return 0;
}
