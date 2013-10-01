#include <stdio.h>
#include <conio.h>
#include <math.h>
 
 
int main ()
{
	int i,j,c = 0,counter=0;
	for(i = 2;counter!=10001;i++)
	{
		for(j = 2;j<i;j++)
		{
			if(i%j == 0)
			{
				c = 1;
			}
		if( c == 0)
		{
			counter++;
		}
		c = 0;
		
	}
	printf("%d",i );
	getch();
}