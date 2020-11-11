/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//C built in function to check the greater numbers among two..

#include <stdio.h>
#include <math.h>
int main()
{
    float a, b;
    printf("Enter the no. to be checked.\n");
    scanf("%f %f",&a,&b);
    
    if(isgreater(a,b))
    {
        printf("%.0f is greater ",a);
        return 0;
    }
    
    printf("%.0f is greater ",b);
    return 0;
}
