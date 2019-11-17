/*INPUT: one String and an integer
  OUTPUT: number of distinct substrings of size'n' in string inputted by the user*/
#include<stdio.h>
#include<string.h>
int main()
{
char a[100];   // stores the input string
char b[100];   //temporarily stores a substring for comparision
char s[100][100]; //stores all substrings
int n,check; // n stores the size of substring; check is used in comparing two substrings
int count=0; // stores number of unique substrings
scanf("%s %d",a,&n);
int len=strlen(a); // length of the inputted string
if(n>len)         // if length of a substring is greater than the string, print '0'
{
  printf("%d",0);
  return 0;
}
for(int i=0;i<len-n+1;i++)
{
  for(int q=0;q<n;q++)
  {
    b[q]=a[i+q]; //store a particular substring temporarily in scan
  }
  b[n]='\0';  //ends the string
  check=0;       // initially assign check 0
  for(int j=0;j<count;j++)
  {
    if(strcmp(b,s[j])==0) //checks if the current substring is equal to any other substring
    {
      check=1; 
      break;
    }
  }
  if(check==0)
  {
    strcpy(s[count],b); // copies current substring into s1
    count++;
  }
}
printf("%d",count);
return 0;
}
