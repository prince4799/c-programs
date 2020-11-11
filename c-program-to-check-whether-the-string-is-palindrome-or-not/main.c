/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//C program To check whether the string is palindrome or not

#include <stdio.h>

int main()
{
    char a[100];
    int i=0,j=0;
    printf("Enter the string ");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++);
    i--;
    while(i>1){
       if(a[j++]!=a[i--]) 
       {
           printf("String is not palindrome");
           return 0 ;
       }
    } 
       printf("String is palindrome");
    return 0;
}
