#include <stdio.h>
#include <stdarg.h>

void minprint(char *ptr , ...)
{
	va_list pchar;
	char *p, c;
	int i;
	va_start(pchar , ptr );
	for( p = ptr ; *p ; p++ )
	{
		if(*p=='%')
	    	{
      			p++ ;
      			if(*p=='d')
     			{ 
          			i=va_arg(pchar, int );
          			int x=0;
          			char ch[100];
          			while (i!=0)
          			{
          				int remainder= i%10;
          				ch[x]= '0'+ remainder;
          				i=i/10;
          				x++;
          			}
          			x--;
          			while (x>=0)
          			{
          				
          				putchar(ch[x]);
          				x--;
          			}
        		}
      			else if(*p=='c')
        		{
        			c =(char) va_arg(pchar,int);
        			putchar(c);
        		}
		}
		else
     			putchar(*p) ;
	} 
	va_end(pchar) ;
}
int main()
{
	minprint("%d %c ", 10, 'a'); 
	return 0 ;
}

