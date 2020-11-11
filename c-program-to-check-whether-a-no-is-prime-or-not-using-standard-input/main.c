//C program to check whether a no. is prime or not...

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


int
main ()
{
  int number, i, flag = 0;
  printf ("enter a no...\n");
  scanf ("%d", &number);
  if (number < 2) //check whether a no. is greater than 1 since prime no. starts from 2 
    {
      printf ("please enter the value greater than 1!..");
      exit;
    }
  else
    {
      for (i = 2; i <= number / 2; i++)
	{
	  if (number % i == 0)
	    {
         flag=1;
	      break;

	    }
	}
	if(flag==0){
	    printf ("entered no. is prime number!.. \n");
	}
     else{
         printf("entered no. is not a prime number!.. ");
     } 
    }
  return 0;
}
