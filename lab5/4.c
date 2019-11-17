/*INPUT: takes input of array of n elements.
  OUTPUT: gives sorted array as the output.
  REMARK: sorting array using quick sort algorithm.*/
#include <stdio.h>
int divide(long arr[],int start,int end);
void quick_sort(long arr[], int start, int end)
{
	if (start<end)
	{
		int pivot = divide(arr, start, end);
		quick_sort(arr, start, pivot-1);
		quick_sort(arr, pivot+1, end);
	}
}
int divide(long arr[],int start,int end)
{
	int pivot= arr[end];
	int i= start;
	for (int j=start; j<end; j++)
	{
		if(arr[j]<=pivot)
		{
			int temp= arr[i];
			arr[i]= arr[j];
			arr[j]= temp;
			i++;
		}
	}
	int temp= arr[i];
	arr[i]= arr[end];
	arr[end]= temp;
	return i;
}
int main()
{
	int n;
	scanf ("%d\n", &n);
	long arr[n];
	for (int i=0; i<n; i++)
	{
		scanf ("%ld,", &arr[i]);
	}
	int el=arr[n-1];
	int count=0;	
	quick_sort(arr,0, n-1);
	for(int i=0;i<n;i++)
	{
		if(el==arr[i])
		{	
			count=i;
			break;
		}
	}	
	for (int i=0; i<n; i++)
	{
		printf("%ld ", arr[i]);
	}
	printf("\n%d", count);
	return 0;
}

