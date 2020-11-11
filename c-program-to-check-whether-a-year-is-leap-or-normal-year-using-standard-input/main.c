/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// C program to check whether the year is leap year or not..


#include <stdio.h>

int
main ()
{
  int leap;
  printf ("please enter the year you want to check!..\n");
  scanf ("%d", &leap);
  if (leap > 0)
    {
      if (leap % 400 == 0 || leap % 100 != 0 && leap % 4 == 0) //the year which is divisible only by
                                                               //400 and 4 is leap year if it is divisible by 100 it is not a leap year.
	{
	  printf ("%d is a leap year\n", leap);
	}
      else
	{
	  printf ("%d is not a leap year", leap);
	}
    }
  else
    {
      printf ("please enter a valid year.");
      return 0;
    }
  return 0;
}
