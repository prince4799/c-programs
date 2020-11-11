/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// C program to concatenate two string

#include <stdio.h>

int main()
{
 char a[100],b[100];
 int i,j;
 printf("Please enter two strings\n");
 scanf("%s%s",a,b);
    for (i=0;a[i]!='\0';i++); // getting the length of 'a[]' string..
    
        for(j=0;b[j]!='\0',i<200;j++,i++){
            a[i]=b[j];
        }
    printf("%s",a);
    return 0;
}
