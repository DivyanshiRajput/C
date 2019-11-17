/*INPUT:two strings s and t.
  OUTPUT: prints t if s ends with t, else 0
  REMARKS: both the strings are stored dynamically*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int flag=1;
int strend (char *s, char *t)//function to return 1 if the string t occurs at the end of the string s, and zero otherwise.
{
	int l1,l2;
	l1= strlen(s);
	l2= strlen(t);
	for (int i=l2-1; i>=0; i--)
	{
		if (*(s+l1-l2+i)!=*(t+i))//if t does not occure at the end of the string s, 0 is assigned to flag.
		{
			flag=0;
			break;
		}
	}
}
int main()
{
	char *s, *t;
	s= (char*)malloc(sizeof(char)*256);//allocating memory for storing characters in string s
	t= (char*)malloc(sizeof(char)*256);//allocating memory for storing characters in string s
	scanf ("%s %s", s,t);//takes input of string s and t.
	strend (s,t);
	if (flag==1)
	{
		for (int i=0; i<strlen(t); i++)//loop to print t string if flag value is 1.
		{
			printf ("%c", *(t+i));
		}
	}
	else
	{
		printf ("0");
	}
}
