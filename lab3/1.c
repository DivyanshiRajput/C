/*INPUT: x and y coordinates of center of two circles and their radii.
  OUTPUT: printing YES if they are intersecting else NO.*/

#include <stdio.h>
#include <math.h>
int main()
{
int x1,y1,x2,y2,r1,r2,d; //declaration of variables storing the coordinates and radii
float c1c2; //distance between centres of the circles 
scanf ("%d %d %d %d %d %d" , &x1, &y1, &x2, &y2, &r1, &r2);
c1c2= sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2)); //calculating the distance between the centres 
d= fabs(r1-r2); //modulus of the difference between radii
if (r1<0 || r2<0)
  { 
  printf ("invalid input");
  }

if (c1c2<= (r1+r2) && c1c2>=d)
  {
  printf ("YES");
  }

else
  {
  printf ("NO");
  }

return 0;
}

  

