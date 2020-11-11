/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//C program to check the largest among the ten numbers.

#include <stdio.h>
#include<conio.h>
#include<stdlib.h>

int
main ()
{
  int a[10], i = 0, largest;
  printf ("enter the 10 numbers.\n");
  for (i; i < 10; i++)
    {
      scanf ("%d", &a[i]);
    }
  largest = a[0];

  for (i = 1; i < 10; i++)
    {
      if (largest < a[i])
    	{
	         largest = a[i];
	    }
    }
 printf("%d is largest among the no.",largest);
  return 0;
}
