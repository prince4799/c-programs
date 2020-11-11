
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/



// c program to find the number of coins .....
// inputs are total amount 
// no. of 1rs coins in ratio
// no. of 50paise coins in ratio
// no. of 25paise coins in ratio
#include <stdio.h>
#include <math.h>

int main ()
{
  int total;
  float r25, r50, r1, x, a, b, c, coin;

  printf ("Enter the total amount ..");
  scanf ("%d", &total);

  printf ("Enter the ratio of coins.\n1RS:50paise:25paise- \n");
  scanf ("%f%f%f", &r1, &r50, &r25);

  a = r1 * 1.0;
  b = r50 / 2;
  c = r25 / 4;
  x = a + b + c;
  coin = total / x;

  r1 =ceil(r1* coin);
  r25=floor(r25*coin) ;
  r50=floor(r50*coin) ;

  printf ("%f =1rs\n%f =25p\n%f =50p\n", r1, r25, r50);

  return 0;
}

