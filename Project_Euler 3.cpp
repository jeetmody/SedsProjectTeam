#include <stdio.h>
#include <conio.h>

 
 
int main ()
{
        long long int num;
        num = 600851475143LL;
        long long int Largest = 2;
        while (num > Largest)
        {
                if (num % Largest==0)
                {
                        num = num/Largest;
                        
                }
                else
                {
                        Largest++;
                }
        }
        printf("Largest Prime Factor: %lld\n",Largest);

        getch();
        return 0;
}
