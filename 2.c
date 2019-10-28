#include<stdio.h>
int main()
{
	struct complex
	{
		float real;
		float imag;
	};
	struct complex x;
	struct complex y;
	scanf("%f %f",&x.real,&x.imag);
	scanf("%f %f",&y.real,&y.imag);
	printf("%.2f + %.2fi\n",(x.real+y.real),(y.imag+x.imag));
	printf("%.2f + %.2fi\n",(x.real-y.real),(x.imag-y.imag));
	printf("%.2f + %.2fi",(x.real*y.real-x.imag*y.imag),(y.imag*x.real+x.imag*y.real));
	return 0;
}
