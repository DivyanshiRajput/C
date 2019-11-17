#include <stdio.h>
int main()
{
int temp[10];
int arr[10];
int i,j,k;

for (i=0; i<10; i++)
   {
   scanf ("%d,", &temp[i]);
   }
for (j=9; j>=0; j--)
   {
    printf ("%d ", temp[j]);
   }
return 0;
}
