/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//C program to print the palidromic prime
#include <stdio.h>
int checkPalindrome(int m){
    int rem,rev=0,cpy;
    cpy=m;
    while(cpy){         //ist iter    2nd iter   3rd iter
        rem=cpy%10;     //123%10=3    12%10=2    1%10=1
        rev=rev*10+rem; //0*10+3=3    3*10+2=32  32*10+1=321
        cpy/=10;        //123/10=12   12/10=1    1/10=0
    }
    if(rev==m){
        return 1;
    }
    return 0;
}
int checkPrime(int l){
    int i,flag=0;
    for (i=2;i<=l/2;i++){
        if(l%i==0)
        {
            return 0;
        }
    }
    flag=checkPalindrome(l);
    return flag;
}
int main()
{
   int low,high,j;
    printf("enter the range..");
    scanf("%d %d",&low,&high);
    for (j=low;j<=high;j++){
        if(j==1)
        continue;
        if(checkPrime(j)){
            printf("%d ",j);
        }
    }
    return 0;
}
