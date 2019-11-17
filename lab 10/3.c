#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
	FILE *fileptr;
	fileptr= fopen("file1", "w");
	system("date>file1");
	fclose(fileptr) ;
	
	sleep(5);
	
	fileptr= fopen("file2", "w");
	system ("date>file2");
	system ("cat file1");
	system ("cat file2");
	fclose(fileptr) ;
}
