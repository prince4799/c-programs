/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// C program to Print the prime numbers in a given range...
//there is a second type program is also commented  below
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int low, high,i, j,flag=0;
  printf("enter the lower range\n");
  scanf("%d",&low);
    printf("enter the higher range\n");
    scanf("%d",&high);
    if(high<low){ // checks if  high range is less than low.
        printf("please give valid input.");
        exit(1);
    }
    for(i=low;i<=high;i++){
        if(i==1){
            continue;
        }
        flag=0;
        for(j=2;j<i/2;j++){
            if(i%j==0){
                flag=1;
                break;
            }
          
        }
        if(flag==0){
            printf("%d....",i);
        }
    }
    printf("  are the prime no within a given range");
    return 0;
}

// int main(){
//     int i,j,low, high,flag;
//     printf("enter the range");
//     scanf("%d%d",&low,&high);
//     //swaping the low and high to get the correct range.
//     if(low>high){
//         low=low+high;
//         high=low-high;
//         low=low-high;
//     }
//         for (i=low;i<high;i++) {
//             if(i==1){
//                 continue;
//             }
//             flag=0;
//             for(j=2;j<i/2;j++){
//                 if(i%j==0){
//                     flag=1;
//                     break;
//                 }
//             }
//             if(flag==0){
//                 printf("%d ",i);
//             }
//         }                              
    
// }
