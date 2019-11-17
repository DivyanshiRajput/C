#include <stdio.h>
#include <math.h>
int main()
{
int a,b,c, gcd;

scanf ("%d %d", &a,&b );
a= fabs(a);
b= fabs(b);
if (a!=0 && b!=0)
{
 if(a>b)
 {
 c=a;
 a=b;
 b=c;
 }
 for (int i=1; i<=a; i++)
	{
	if (a%i==0 && b%i==0)
        {
	gcd=i;
	}
	}
printf("%d", gcd);
}
else if (a==0 && b==0)
{
printf ("Invalid input");
}

else if (a==0 && b!=0)
{
printf ("%d", b);
}

else if (a!=0 && b==0)
{
printf ( "%d", a);
}
return 0;
}

 
 
	


