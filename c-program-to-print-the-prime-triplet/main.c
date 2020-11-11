/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// C program to print the prime triplet ...

#include <stdio.h>
int checkPrime(int l){
    int i;
    for (i=2;i<=l/2;i++){
        if(l%i==0){
            return 0;
        }
    }
    return 1;
}
int main()
{
   int low,high,j;
   printf("enter the range between you want to print the prime triplet \n");
   scanf("%d%d",&low,&high);
   for (j=low;j<=high;j++){
       if(j<3){
           continue;
       }
       if(checkPrime(j)&&checkPrime(j+2)&&checkPrime(j+6)){
           printf("(%d %d %d) ",j,j+2,j+6);
       }
       if(checkPrime(j)&&checkPrime(j+4)&&checkPrime(j+6)){
           printf("(%d %d %d) ",j,j+4,j+6);
       }
   }

    return 0;
}
