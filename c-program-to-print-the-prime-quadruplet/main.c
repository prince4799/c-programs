/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// C program to print the prime quadruplet ...
//example: {{5, 7, 11, 13},{11, 13, 17, 19},{101, 103, 107, 109}, {191, 193, 197, 199}, ...... {2081, 2083, 2087, 2089}}

//logic {p,p+2,p+6,p+8}



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
       if(checkPrime(j)&&checkPrime(j+2)&&checkPrime(j+6)&&checkPrime(j+8)){
           printf("(%d %d %d %d) ",j,j+2,j+6,j+8);
       }
      
   }

    return 0;
}
