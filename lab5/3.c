/*INPUT: takes input of array of n elements.
  OUTPUT: gives sorted array as the output.
  REMARK: sorting array using merge sort algorithm.*/
#include <stdio.h>
int count=0;
void merge(long arr[], long start[], long end[],int l, int r) //function for merging two different sorted arrays.
{
	count++; //count for the number of times merge function is used.
	int i=0;
	int j=0;
	int k=0; 	
	while (i<l && j<r) 
	{
		if (start[i]<=end[j]) //compares the first two elements of the divided arrays and stores it into the main array.
		{
			arr[k]= start[i];
			i++;
		}
		else
		{
			arr[k]= end[j];
			j++;
		}
		k++;
	}
	while (i<l)
	{
		arr[k]= start[i];
		i++;
		k++;
	}
	while (j<r)
	{
		arr[k]= end[j];
		j++;
		k++;
	}
}
void merge_sort(long arr[], int n) //recursive function for sorting the given array.
{
	if (n>1)
	{
		int mid= n/2;		
		long start[mid]; //first half of the array.
		long end[n-mid]; //second half of the array.
		int l= mid;
		int r= n-mid;
		for (int i=0; i<mid; i++) //loop for storing values from the main array into divided array.
		{
			start[i]= arr[i];
		}
		for (int i=mid; i<n; i++) //loop for storing values from the main array into divided array.
		{
			end[i-mid]=arr[i];
		}
		merge_sort(start,mid);
		merge_sort(end,n-mid); 
		merge(arr, start, end,l,r);
	}
	else
	{
		return;
	}
}
int main()
{
	int n;
	scanf ("%d\n", &n);
	long arr[n];
	for (int i=0; i<n; i++) //loop for taking array as input.
	{
		scanf ("%ld,", &arr[i]); 
	}
	merge_sort(arr, n);
	for (int i=0; i<n; i++)
	{
		printf ("%ld ", arr[i]); //prints the sorted array.
	}
	printf ("\n%d" , count);
}
