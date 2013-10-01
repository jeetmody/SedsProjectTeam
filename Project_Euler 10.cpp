#include <stdio.h>
#include <conio.h>

 
 
int main ()
{
	long i,c=0,s=0,j;
	for(i = 2; i<2000000; i++)
	{
        printf("%d",i);
		for(j=2;j<i;j++)
		{
			if(i%j == 0)
			{
				c=1;
				break;
			}
		}
		if( c==0)
		{
			s=s+i;
		}
	}
	printf("%d",s);
	getch();
}
