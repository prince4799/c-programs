/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//C program To print the square root of a number....
#include <stdio.h>

int main()
{
 int i,sqrt,n;
 printf("enter the number for square root..\n");
 scanf("%d",&n);
 for(i=1;i<=n/2;i++)
{
    if(i*i==n)
  {  printf("%d ",i);
    return 0;
     }
    else {
        printf("there is no square root of the number");
        return 0;
    }
}
    return 0;
}
