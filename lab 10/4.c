#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
	FILE *fileptr;
	fileptr= fopen("file3", "w");
	system ("cat file1 file2 > file3");
	system("cat file3") ;
	fclose (fileptr);
}
