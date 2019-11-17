/*INPUT: unsorted array of 20 elements.
  OUTPUT: sorted array in increasing order.
          number of swaps and comparisons made by program.
  REMARKS: Sorting array using bubble sort algorithm.*/
#include <stdio.h>
void bubble_sort(long arr[20]) //function for sorting the given array.
{
	long temp; //temporary variable for swaping elements.
	int comparisons=0; //count for number of comparisons.
	int swap=0; //count for number of swaps.
	for (int i=0; i<20; i++) 
	{
		for (int j=0; j<19-i; j++) //loop for comparing the two adjacent elements.
		{
		        comparisons++;
			if(arr[j]>arr[j+1]) //condition for swaping elements.
			{
				temp = arr[j]; //swaps the two element if the given condition is satisfied.
				arr[j]= arr[j+1];
				arr[j+1]= temp;
				swap++ ;
			}
		}
	}
	for (int i=0;i<20;i++) //loop for printing the sorted array.
	{
		printf("%ld ",arr[i]);
	}
        printf("\n");
	printf ("%d %d", swap, comparisons); //prints number of swaps and comparisons.
}
int main()
{
long arr[20];
int i;
for (i=0; i<20; i++) //takes array as input.
   {
   scanf ("%ld,", &arr[i]);
   }
bubble_sort(arr);
return 0;
}


