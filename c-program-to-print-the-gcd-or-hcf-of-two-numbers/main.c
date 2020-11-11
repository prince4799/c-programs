/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//C program to print the gcd or hcf of two numbers...
#include <stdio.h>

int main()
{
    int n1,n2,min,hcf;
    printf("enter the two numbers\n");
    scanf("%d %d",&n1,&n2);
    min=n1<n2?n1:n2;
    for(hcf=min;hcf>=1;hcf--){
        if(n1%hcf==0&&n2%hcf==0){
            printf("%d ",hcf);
            return 1;
            
        }
    }

    return 0;
}


//==========program to print the LCM of two numbers==========

// int main(){
//     int lcm,max,i,n1,n2;
//     printf("enter the numbers\n");
//     scanf("%d %d",&n1,&n2);
//     max=n1>n2?n1:n2;
//     for(lcm=max;lcm<=n1*n2;lcm+=max){
//         if(lcm%n1==0&&lcm%n2==0){
//             printf("%d is lcm",lcm);
//             return 0;
//         }
//     }
// }