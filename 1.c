/*INPUT: Takes two floats and a character as input (operands and operator)
  OUTPUT: Prints the result of the expression
  REMARKS: implemented through multiple functions using function pointers
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int add(int a, int b)// adds a and b
{
	return a+b;
}
int sub(int a, int b)// subtracts b from a
{
	return a-b;
}
int multiply(int a, int b)// returns their product
{
	return a*b;
}
float divide(int a, int b)// returns the quotient assuming b is not 0
{
	
	return (float)a/(float)b;//returns float value.
}
int main(int argc, char **argv)
{
	float a= atoi(argv[1]);
	float b=atoi(argv[2]);
	char operator=argv[3][0];
	char oplist[]={'+','-','*'};// array of operators
	int (*funcPoint[])(int,int)={add,sub,multiply};// function array
	if (operator=='/')
	{
		printf("%f",divide(a,b));
		return 0;
	}
	for(int i=0;i<4;i++)
	{
		if(oplist[i]==operator)
		{
			printf("%d",funcPoint[i](a,b));// chooses appropriate function form function array matching operator character
			break;
		}
	}
	return 0;
}
