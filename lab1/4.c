#include <stdio.h>
#include <math.h>
int main()
{
double a,b,c;
float d,x,y;
scanf ( "%lf", &a);
scanf ( "%lf", &b);
scanf ( "%lf", &c);	
d= b*b - 4*a*c;
if (d<0)
   {
    x= -b/(2*a);
    y= sqrt(-d)/(2*a);
    printf ( "%0.2f+i%0.2f %0.2f-i%0.2f", x,y,x,y);
   }
else
   {
    x= (-b + sqrt(d))/(2*a);
    y= (-b - sqrt(d))/(2*a);
    printf ( "%0.2f %0.2f",x,y);
    }
return 0;
}
