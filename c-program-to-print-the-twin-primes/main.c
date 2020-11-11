/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// C program to print the twin prime.. up to given range
#include <stdio.h>
#include <stdbool.h>
int checkPrime(int l){
    int i;
    for(i=2;i<l/2;i++){
        if(l==1){
        continue;
    }
        if(l%i==0){
          return 0;
        }
    }
     return 1;
}
int main()
{
 int i,flag,low,high;
 printf("enter the range i.e. lower  and higher upto which you want to print the twin primes\n");
 scanf("%d %d",&low,&high);
 for (i=low;i<=high;i++)
{ 
    if(i<3)
    continue;
    
    if(checkPrime(i)&&checkPrime(i+2))
    {
        printf("(%d %d )",i,i+2);
    }
}
    return 0;
}


