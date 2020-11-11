/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// C program to print the fibbonacci series...without recursion.


//==================first program is upto where you want to print the series...========
#include <stdio.h>

int main()
{
    int prev=0,next=1,fib,n;
    printf("enter the number upto which you want to print fibbonacci series..\n");
    scanf("%d",&n);
  while(next<=n){
        printf("%d ",next);
        //this is actually a swaping of the numbers
        fib=next+prev;
        prev=next;
        next=fib;
    }
    return 0;
}

//=====================it will print upto the number you provide================
//uncomment it 

// int main()
// {
//     int prev=0,count=1,next=1,fib,n;
//     printf("how many numbers you want to print in fibbonacci series..\n");
//     scanf("%d",&n);
//   while(count<n){
//         printf("%d ",next);
//         //this is actually a swaping of the numbers
//         fib=next+prev;
//         prev=next;
//         next=fib;
//         count++;
//     }
//     printf("\n%d",count);
//     return 0;
// }