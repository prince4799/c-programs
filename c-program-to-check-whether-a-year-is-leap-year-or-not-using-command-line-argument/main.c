/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int
main (int argc, char *argv[])
{
  int leap;
  if (argc < 1)
    {
      printf ("please enter a year and try again!");
      exit;
    }
  leap = atoi (argv[1]);
  if (leap > 0)
    {
      if (leap % 4 == 0 && leap % 100 != 0 || leap % 400 == 0)
	{
	  printf ("Entered year is a leap year");
	}
      else
	{
	  printf ("Entered year is not a leap year");
	}
    }else{
         printf("Enter a valid year");
    }
  return 0;
}
