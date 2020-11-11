//Reverse a no. using user input 

#include <stdio.h>
#include <conio.h>

int reverse (int x)
{
  int rev = 0, rem = 0;
  while (x)
    {			                    	//it will execute untill n becomes 0
      rem = x % 10;		                //123%10=3            12%10=2       1%10=1
      rev = rev * 10 + rem;         	//0*10+3=3            3*10+2=32     32*10+1=321
      x /= 10;			                //n=n/10
    }
  return rev;
}

int main ()
{
  int n, reversed_no;
  printf ("enter the no. to be reversed\n");
  scanf ("%d", &n);	                        	// let us assume user input 123
    reversed_no=reverse(n);
  printf ("%d is a reverse no.", reversed_no);
    return 0;
  
}
