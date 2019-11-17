#include <stdio.h>
#include <stdlib.h>
int main (int argc, char* argv[])
{
	int sum=0;
	int i;
	for (i=1; i<argc; i++)
	{
		sum= sum + atoi(argv[i]);
	}
	printf ("%d ", (argc-1));
	printf ("%d", sum);
}
