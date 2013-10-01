#include <stdio.h>
#include <conio.h>
#include <math.h>
 
 int main()
 {
 	int a,b,c;
 	int co = 0, p = 1;
 	for(c=1;c<1000;c++)
 	{
                // printf("%d",c);
 		for(b = 1;b<c;b++)
 		{
 			for(a = 1;a<b;a++)
 			{
 				if(a*a + b*b == c*c)
 				{
 					if(a+b+c == 1000)
 					{
 						printf("%ld",a*b*c);
 						co = 1;
 						getch();
 						return 0;
 					}
 				}
 			}
 		
 		}
 		
 	}

 }
