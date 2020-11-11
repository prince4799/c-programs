/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// C program to convert differrent number systems to different  are given below
// Uncomment whichever conversion you want...

#include <stdio.h>
#include <math.h>
//C program to convert the decimal to binary..

// int main()
// {
//   int n,i=1,rem;
//   long int bin;
//   printf("Enter the number");
//   scanf("%d",&n);
//     while(n){
//         rem=n%2;
//         bin=bin+rem*i;
//         n/=2;
//         i*=10;
//     }
//     printf("%ld",bin);

//     return 0;
// }

//=============================================================================
// C program to convert decimal to octal

// int main(){
//     int n, i=1, rem, oct;
//     printf("enter the number..");
//     scanf("%d",&n);
//     while(n){
//         rem=n%8;
//         oct=oct+rem*i;
//         n/=8;
//         i*=10;
//     }
//     printf("%d",oct);
//     return 0;
// }

//====================================================================================
//C program to convert binary to decimal
// int main(){
//     int i=0,dec=0,rem;
//     long long int bin;
//     printf("enter the number");
//     scanf("%lld",&bin);
//     while(bin){
//         rem=bin%10;
//         dec=dec+rem*pow(2,i);
//         bin/=10;
//         i++;
//     }
//     printf("%d",dec);
//     return 0;
// }

//====================================================================
// C program to convert octal to decimal
// int main(){
//     int oct,i=0,rem=0,dec;
//     printf("enter the number");
//     scanf("%d",&oct);
//     while(oct){
//         rem=oct%10;
//         dec+=rem*pow(8,i);
//         oct/=10;
//         i++;
//     }
//     printf("%d",dec);
//     return 0;
// }

//========================================================================


//C program to convert octal to binary

// int bin(int val){
//     int i=1,rem,bina;
//     while(val){
//         rem=val%2;
//       bina+=rem*i;
//       i*=10;
//         val/=2;
//     }
//     return bina;
// }


// int dec(int oct){
//     int i=0,rem=0,deci=0;
//     while(oct){
//         rem=oct%10;
//         deci+=rem*pow(8,i);
//         i++;
//         oct/=10;
//     }
//     i= bin(deci);
//     return i;
// }

// int main(){
//     int n,oct,i,rem,med;
//     printf("enter the number");
//     scanf("%d",&oct);
//     med=dec(oct);
//      printf("%d",med);
// }

