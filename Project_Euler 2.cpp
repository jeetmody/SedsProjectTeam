#include <stdio.h>
#include <conio.h>

int main()
{
	int s =0,i = 1, j = 1, c;
	for(;j<=4000000;)
	{
		
		c = i + j;
		i = j;
		j = c;
		if(j%2==0)
			s = s + j;
	}
	printf("%d",s);
	getch();
}
