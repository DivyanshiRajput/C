/*INPUT: unsorted array of 20 elements.
  OUTPUT: sorted array in increasing order.
          number of swaps and comparisons made by program.
  REMARKS: Sorting array using selection sort algorithm.*/
#include <stdio.h>
void selection_sort (long arr[20]) //function for sorting the given array.
{
	int swap=0; //count for swaps.
        int comparisons=0; //count for comparisons.
	for (int i=0; i<19; i++)
	{
	        int  min = i; //declaring index for the smallest element.
		for (int j=i+1; j<20; j++) //loop for comparing two elements of array.
		{
			comparisons ++;
			if (arr[j]<arr[min])
			{
				min=j;
			}
		}
		long temp= arr[i]; 
		arr[i]= arr[min];
		arr[min]= temp;
		swap++;
	}
	for (int i=0;i<20;i++) //loop for printing the sorted array.
	{
		printf("%ld ",arr[i]);
	}
	printf ("\n%d %d", swap, comparisons); //prints count of swaps and comparisons.
}
int main()
{
long arr[20];
int i;
for (i=0; i<20; i++) //takes input for array.
   {
   scanf ("%ld,", &arr[i]);
   }
selection_sort(arr);
return 0;
}
