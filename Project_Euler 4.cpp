#include <iostream>
#include<conio.h>
using namespace std;

bool isValid(int);

int main()
{
int pal, final;


// Finds largest product
for (int a = 999; a >= 100; a--)
{
for (int b = 999; b >= 100; b--)
{
pal = a * b;
if (isValid(pal))
{final = a * b;
//cout<<a<<b;
	break;}
}
}


cout << final << endl;
getch();
return 0;
}


bool isValid(int num)
{
bool status = true;
int digit, rev = 1;
int num2 = num;

// Tests for palindrome
while (num)
{
digit = num % 10;
num /= 10;
rev = rev * 10 + digit;
}

if (rev == num2)
status = true;
else
status = false;
return status;
}

