#include <stdio.h>
int main()
{
	int i;
	int n1, n2;
	double p3[11];
	scanf("%d", &n1);
	double p1[11]={0};
	for (i=10-n1; i<=10; i++)
	{
		scanf ("%lf", &p1[i]);
	}
	scanf ("%d", &n2);
	double p2[11];
	for (i=10-n2; i<=10; i++)
	{
		scanf ("%lf", &p2[i]);
	}
	if (n1>=n2)
	{
		p3[0]=n1;
		for(i=10-n1; i<=10; i++)
		{
			p3[i]= p1[i]+p2[i];
		}
                printf("%d " , n1 ) ;

	}
	else if (n1<n2)
	{
		p3[0]=n2;
		for(i=10-n2; i<=10; i++)
		{
			p3[i]= p1[i]+p2[i];
		}

                printf("%d " , n2 ) ;
	}
	for (i=10-n1 ; i<=10 ; i++)
	{
		printf ("%0.2lf ", p3[i]);
	}
	double p4[21];
	for (i=10-n1; i<=10; i++)
	{
		for(int j=10-n2; j<=10; j++)
		{
			p4[i+j] += p1[i]*p2[j];
		}
	}
	printf ("\n%d ", n1+n2);
	for (i=20-n1-n2; i<21; i++)
	{
		printf ("%0.2lf ", p4[i]);
	}

}

				
