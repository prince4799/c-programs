/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// C program to print the sum of all digits....

#include <stdio.h>

int main()
{
   int n,rem,sum=0;
   printf("enter the number...");
   scanf("%d",&n);      //let us take example
   while(n){            //123      12           1
       rem=n%10;        //3         2           1
       sum+=rem;        //0+3=0    3+2=5      5+1=6
       n/=10;           //12        1           0      
   }
   printf("%d is sum",sum); //6

    return 0;
}
