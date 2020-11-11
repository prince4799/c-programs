/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//C program to print the square root of a number  without sqrt function

#include <stdio.h>
#include <math.h>

int main()
{
    int i, n;
   double j;
    printf("enter the number\n");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++){
        if(i*i==n)
        {
            printf("%d is square root",i);
            return 0;
        }
        else
        j=pow(n,0.5); // equivalent to j=sqrt(n);
        printf("%0.2f is square root",j);
        return 0;
    }

    return 0;
}
