/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// C Program to Swap the two numbers without using third variable......
#include <stdio.h>

int main()
{
    int a,b;
    printf("enter the two numbers..\n");
    scanf("%d %d",&a,&b);
    printf("before swaping a=%d   b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
     printf("after swaping a=%d   b=%d",a,b);
    return 0;
}
