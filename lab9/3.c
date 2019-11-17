/*INPUT:details of n students and store them in an array of structures.
  OUTPUT:print all the input details.
  REMARKS: used structures for storing the details.*/
#include <stdio.h>
struct details //structure for storing student details.
{
	char name[100], rollnum[100];
	int age,marks;
}p1;
int main()
{
	int n; 
	scanf ("%d", &n); //input for number of students.
	struct details p1[n];
	for (int i=0; i<n; i++) //loop for taking input of the details.
	{
		scanf ("%s %s %d %d", p1[i].name, p1[i].rollnum, &p1[i].age, &p1[i].marks);
	}
	for (int i=0; i<n; i++) //loop for printing the details.
	{
		printf ("%s", p1[i].name);
		printf ("\n%s", p1[i].rollnum);
		printf ("\n%d", p1[i].age);
		printf ("\n%d\n", p1[i].marks);
	}
}





