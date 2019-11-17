/*INPUT:two strings and comparing them using pointers.
  OUTPUT:‘0’ if the strings are equal and ‘1’ if they are unequal.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char str_cmp (char *str1, char *str2)//function for comparing two strings.
{
	str1 = (char*)malloc(sizeof(char)*255);//allocating dynamic memory to store first string.
	str2 = (char*)malloc(sizeof(char)*255);//allocating dynamic memory to store second string
	scanf ("%s %s", str1, str2);
	int count=0;//count to check the numbers of equal characters.
	for (int i=0; i<strlen(str1); i++)//loop for comparing both strings. 
	{
		if (str1[i]==str2[i])
		{
			count++;
		}	
	}
	if (count==strlen(str1))//condition for both the strings to be equal.
	{
		printf ("%s", "0");
	}
	else
	{
		printf ("%s", "1");
	}
}
int main()
{
	char *str1, *str2;
	str_cmp (str1, str2);
}


