/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// C program to check for the prime number
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n,i,flag=0;
  printf("enter the number-\n");
  scanf("%d",&n);
 if (n<0){      // handle the negative values if entered by user..
     printf("please enter valid number...");
     exit(1);
 }
  for(i=2;i<n;i++){  // Checks if there is a number which can divides the input other than 1 and input itself. 
      if(n%i==0){
         flag=1;
          break;
      }
      
  }
  if (n==1){        //handle if the input is 1
      printf("1 is not a prime");
      return 0;
  }

 if (flag==0){   //if flag is 0 then the number is prime 
     printf("the number is prime..");
     return 0;
 }
  
 else { 
     printf("the number is not prime..");
    return 0;
}
  return 0;
}