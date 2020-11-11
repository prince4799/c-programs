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
main (int argc, char *argv[])
{
  int a[10], i = 0, j, largest;
  if (argc > 9)
    {
      printf ("enter the 10 numbers.\n");
      for (i, j = 1; i < 10, j <= 10; i++, j++)	// 'j' is for pulling no. from argv
	{
	  a[i] = atoi (argv[j]);
	}

      largest = a[0];

      for (i = 1; i < 10; i++)
	{
	  if (largest < a[i])
	    {
	      largest = a[i];
	    }
	}
      printf ("%d is largest among the no.", largest);
    }
  else
    {
      printf ("please enter 10 digits.");
    }
  return 0;
}
