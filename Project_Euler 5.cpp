#include <stdio.h>
#include <conio.h>

 
 
int main ()
{
	int i = 2520,j;
	int c = 0;
	for(;;i = i + 20)
	{
		for(j = 3; j <= 20; j++)
		{
			if(i%j != 0)
			{
				c = 1;
			}

		}
		if(c == 0)
		{
			printf("%d",i);
			break;
		}
		c = 0;
		
	}
	getch();
}
