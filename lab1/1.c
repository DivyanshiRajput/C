#include <stdio.h>
int main()
{
float r,a;
scanf("%f", &r);
a=3.14*r*r;
if(r<0)
  {
   printf ("Invalid input");
   }
else
   {
    printf ("%0.2f\n", a);
   }
return 0;
}
    

