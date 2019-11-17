/*INPUT:two complex numbers.
  OUTPUT:Performing addition, subtraction, multiplication on them and printing the result.
  REMARKS: using structures to store the numbers.*/
#include <stdio.h>
struct number1 //structure for storing first number.
{
	float x1, y1;
}p1;
struct number2//structure for storing second number.
{
	float x2,y2;
}p2;
int main()
{
	struct number1 p1;
	struct number2 p2;
	scanf ("%f %f", &p1.x1, &p1.y1); //input for first number.
	scanf ("%f %f", &p2.x2, &p2.y2); ////input for second number.
	printf ("%0.2f + %0.2fi", p1.x1+p2.x2, p1.y1+p2.y2); //printing sum.
	printf ("\n%0.2f + %0.2fi", p1.x1-p2.x2, p1.y1-p2.y2); //printing difference.
	printf ("\n%0.2f + %0.2fi", (p1.x1*p2.x2)-(p1.y1*p2.y2), (p1.x1*p2.y2)+(p1.y1*p2.x2));//printing product.
}
