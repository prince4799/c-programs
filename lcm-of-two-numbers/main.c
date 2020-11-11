/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

************************************************************************
* type 1---using standard input and type 2--- using command line input *
***********************************************************************


// C program to find the lcm of two numbers. 


#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main ()
{
  int n1 , n2 ,lcm,max;
  printf ("enter the numbers\n");
  scanf("%d%d",&n1,&n2);
  max=n1>n2?n1:n2;
  for (lcm=max;max<=n1*n2;lcm=lcm+max){
      if(lcm%n1==0&&lcm%n2==0){
          printf("%d is lcm",lcm);
          return 0;
      }
  }

  return 0;
}
//=============================================================================================-
//------------// C program to find the lcm of two numbers.Using command line //-------------// |
//=============================================================================================-


// int main (int args,char *vector[])
// {
//   int n1 , n2 ,lcm,max;
//   if(args<2){
//       printf("please enter valid input");
//       return 0;
//   }
//   n1=atoi(vector[1]);
//   n2=atoi(vector[2]);
//   max=n1>n2?n1:n2;
//   for (lcm=max;max<=n1*n2;lcm=lcm+max){
//       if(lcm%n1==0&&lcm%n2==0){
//           printf("%d is lcm",lcm);
//           return 0;
//       }
//   }

//   return 0;
// }

