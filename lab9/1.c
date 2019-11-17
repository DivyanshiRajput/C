#include <stdio.h>
#include <stdlib.h>
int main (int argc, char* argv[])  // using argc and argv as main arguments 
{
	int a, b;  // a and b denotes the two numbers passed through main
	
	if (argc==4)  // checking the number of arguments 
	{
		a= atoi(argv[1]);  // converting char to integer using -atoi- 
		b= atoi(argv[2]);
		
		
		if (argv[3][0]=='+') // comparing the char to operator and performing the operation
		{
			printf ("%d", a+b);  // printing the result ( a + b ) 
 		}
		else if(argv[3][0]=='-') // ' - '
		{
			printf ("%d", a-b);  
		}
		else if((argv[3][0]=='/') && (b!=0))  // ' / ' 
        	{
        	        printf ("%d", a/b);  
        	}
        	else     // ' * '   
		{
			printf ("%d", atoi(argv[1])*atoi(argv[2]));
		}
	}
	return 0;
}

	

