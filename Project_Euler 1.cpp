#include <stdio.h>
#include <conio.h>

int main()
{
	int s =0,i;;
	for(i=1;i<1000;i++)
	{
		if(i%5 == 0 || i%3 == 0)
			s=s+i;
	}
	printf("%d",s);
	getch();
}
