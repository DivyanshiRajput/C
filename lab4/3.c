#include <stdio.h>
int main()
{
int arr[10];
int i;
int x;
int initial= 0;
int final= 9;
int count=0;
int result=0;
int mid=0;
for (i=0; i<10; i++)
   {
   scanf ("%d,", &arr[i]);
   }
scanf (" %d", &x);
while (final>=initial)
   {
    count++;
    mid= (initial+final)/2;
    if (x== arr[mid])
      {
       result=1;
       break;
      }
    else
      {
       if (x<arr[mid])
          {
            final= mid-1;
          }
       else
          { 
            initial= mid+1;
          }
      }
   }
printf ("%d %d", result, count);
return 0;
}
