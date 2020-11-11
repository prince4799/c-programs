/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// C Program to print 0, 0, 2, 1, 4, 2, 6, 3, 8, 4, 10, 5, 12, 6, 14, 7, 16, 8
#include <stdio.h>

int main()
{
  int n,i,a=0,b=0;
  printf("enter the number \n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
     if(i%2==0){
         printf("%d ",a);
         a+=2;
     } 
     else{
          printf("%d ",b);
         b+=1;
     }
  }
    return 0;
}
