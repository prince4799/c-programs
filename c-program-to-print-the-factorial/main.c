/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   long int fact=1;
   int i,n;
   printf("enter the number you want to get factorial of..");
   scanf("%d",&n);
   if(n==0||n==1)
   {
       printf("1");
       return 1;
 }
   for(i=2;i<=n;i++)
 {
    fact=fact*i;
 }
 printf("%ld",fact);
    return 0;
}
