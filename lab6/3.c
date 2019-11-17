/*INPUT:storing two strings by allocating dynamic memory.
  OUTPUT:concatenated two strings.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char str_cat (char *str1, char *str2)//function for concatenating two strings using pointers
{
	char *str;
	str1 = (char*)malloc(sizeof(char)*255);//allocating dynamic memory to store first string.
	str2 = (char*)malloc(sizeof(char)*255);//allocating dynamic memory to store second sring.
	scanf ("%s %s", str1, str2);//takes input of both the strings.
	int l1= strlen(str1);
	int l2= strlen(str2);
	str = (char*)malloc(sizeof(char)*(l1+l2));//allocating dynamic memory for concatenated string.
	for (int i=0; i<l1; i++)//loop for storing values of first string in the final string. 
	{
		*(str+i)=*(str1+i);
	}
	for (int i=0; i<l2; i++)//loop for storing the values of second string in the final string.
	{
		*(str+l1+i)=*(str2+i);
	}
	printf ("%s", str);
}
int main()
{
	char *str1, *str2;
	str_cat (str1, str2);
}

