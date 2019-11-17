/*INPUT:n numbers using dynamic memory. 
  OUTPUT:printing numbers using loop.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	scanf ("%d", &n); //takes input of number of integers.
	int *p;
	p= (int*)malloc(n*sizeof(int));//allocate dynamic memory to store n integers.
	for (int i=0; i<n; i++)//loop to take input of the numbers.
	{
		scanf ("%d", (p+i));
	}
	for (int i=0; i<n; i++)//loop to print numbers.
	{
		printf ("%d ", *(p+i));
	}
return 0;
}

