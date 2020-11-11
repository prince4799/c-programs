/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//C program to check for the biggest no.of three..
//without using comparator and if else statement.

#include <stdio.h>

int main()
{
    int a, b, c,max;
    
    printf("Enter the numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    
    //this logic holds good for only positive value not for 0's and negative values..
    max=a/b ? a/c ? a : c : b/c ? b : c;
    
    printf("%d is biggest.\n",a);
    return 0;
}
