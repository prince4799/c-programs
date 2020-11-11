/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// C program to print the twin prime.. up to 100
#include <stdio.h>
#include <stdbool.h>
int checkPrime(int l){
    int i;
    for(i=2;i<l/2;i++){
      
        if(l%i==0){
          return 0;
        }
    }
     return 1;
}
int main()
{
 int i,flag=0,low,high;
 printf("enter the range upto which you want to print the Cousin primes\n");
 scanf("%d %d",&low,&high);
 for (i=low;i<=high;i++)
{
      if(i<3){
        continue;
    }
    if(checkPrime(i)&&checkPrime(i+4))
    {
        printf("(%d %d )\n",i,i+4);
        // flag ++;     uncomment this if you want to get total no. of cousin primes
    }
}
//  printf("the total prime no. are(%d)\n",flag);        uncomment this if you want to get total no. of cousin primes
    return 0;
}

