#include <stdio.h>
int main()
{
int n,c=0,f=0;
scanf ("%d", &n);
if (n>1)
{ 
 for (int i=1; i<=n; i++)
 {
   for (int j=1; j<=i; j++)
   {
    if (i%j==0)
    {
    f++;
    }
   }
 if (f==2)
 {
 c++;
 }
 f=0;
 }
printf ("%d", c);
}
else
printf ("0");
return 0;
}

