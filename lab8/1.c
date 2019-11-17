/*INTPUT: integers n and b.
OUTPUT: n represented to the base b.
REMARKS: result is stored in a dynamically allocated string.*/
#include <stdio.h>
#include <stdlib.h>
void itob (int n, char *s,int b) //function to convert n to the base b.
{
	int i=0;
	while (n>0)
	{
		int temp= n%b;//stores remainder in a temporary variable.
		if (temp<10)//condition if remainder is less than 10.
		{
			
			*(s+i)='0'+(n%b);//stores ASCII of the remainder in the string.
		}
		else
		{
			
			*(s+i)='a'-10+temp;//stores ASCII of the remainder in the string.
		}
		i++;
		n=n/b;//replaces n with the quotient.
	}
	for (int j=i-1; j>=0; j--)//loop for printing the string in reverse order.
	{
		printf ("%c", *(s+j));
	}
}
int main()
{
	int n,b;
	char *s;
	scanf ("%d %d", &n,&b);//takes input of n and b
	s= (char*)malloc(256*sizeof(char));//allocates memory to store the characters in the string.
	itob(n, s, b);
}
