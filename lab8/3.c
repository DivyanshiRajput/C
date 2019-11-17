/*INPUT:two integers a and b and a character(operator).
  OUTPUT: prints the result after evaluating the expression
  REMARKS: corresponding functions are called using function pointers*/
#include <stdio.h>
float add (float a, float b)// function to add a and b
{
	float sum;
	sum = a+b;
	printf ("%0.4f",sum);
}
float subtract (float a, float b)// function to subtract b from a
{
        float difference;
        difference = a-b;
        printf ("%0.4f",difference);
}
float multiply (float a, float b)// function to multiply a and b
{
        float product;
        product = a*b;
        printf ("%0.4f",product);
}
float divide (float a, float b)// function to divide a and b
{
        float quotient;
        quotient = a/b;
        printf ("%0.4f",quotient);
}
int main()
{
	char c;
	float a, b;
	scanf ("%f %f %c", &a, &b, &c);// takes input of numbers a,b and the operator.
	if (c=='+')
	{
		float (*fun_ptr)(float, float)=add;//funtion pointer for add function.
		fun_ptr(a,b);
	}
	else if (c=='-')
	{
                float (*fun_ptr)(float, float)=subtract;//funtion pointer for subtract function.
                fun_ptr(a,b);
	}
        else if (c=='*')
	{
                float (*fun_ptr)(float, float)=multiply;//funtion pointer for multiply function.
                fun_ptr(a,b);
        }
        else
	{
                float (*fun_ptr)(float, float)=divide;//funtion pointer for divide function.
                fun_ptr(a,b);
        }
}
