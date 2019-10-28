#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	struct student
	{
		char name[100];
		char rnum[100];
		int age;
		int marks;
	};
	struct student list[n];
	for(int i=0;i<n;i++)
	{
		scanf("%s %s %d %d",list[i].name,list[i].rnum,&list[i].age,&list[i].marks);
	}
	for(int i=0;i<n;i++)
	{
		printf("%s %s %d %d\n",list[i].name,list[i].rnum,list[i].age,list[i].marks);
	}
	return 0;
}
