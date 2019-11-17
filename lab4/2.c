#include <stdio.h>
int main()
{
int arr[10];
int i;
int x;
int flag=0;

for (i=0; i<10; i++)
   {
   scanf ("%d,", &arr[i]);
   }
scanf (" %d", &x);
for (i=0; i<10; i++)
   {
    if (x== arr[i])
      {
      flag=1;
      i++;
      break;
      }
   }
printf ("%d %d", flag, i);
return 0;
}

    
