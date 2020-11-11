/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//C program for series 
//1, 1, 2, 3, 4, 9, 8, 27, 16, 81, 32, 243, 64, 729, 128, 2187 …
#include <stdio.h>

int main()
{
  int i,n,a=1,b=1;
  
  printf("enter the number ");
  scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0){
            printf("%d ",a);
            a*=3;
        }else{
        printf("%d ",b);
        b*=2;
        }
    }
    return 0;
}

//===========Program to print the only desired term of the series==============
// int main(){
//     int i,a=1,b=1,n;
//     printf("enter the term ");
//     scanf("%d",&n);
//     for(i=1;i<n;i++)
//     {
//         if(i%2!=0)
//              a*=2;
//         else
//             b*=3;
//     }
//         if(n%2!=0)
//             printf("%d ",a);
//         else
//             printf("%d ",b);
//     return 0;
// }
//1 1 2 3 4 9 8 27 16 81 32 243 64 729 128 2187 256 6561 512 19683 1024 59049 2048 177147 4096 531441 8192 1594323 16384 4782969 


