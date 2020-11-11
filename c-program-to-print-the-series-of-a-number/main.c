/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//C program to print series 0,0,7,6,14,12,21,18, 28
       
//================Program to print all series===============
#include <stdio.h> 

int main()
{                                       
    int i,a=0,b=0,n;                      
    printf("enter the number..");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        if(i%2!=0){
        printf("%d ",a) ;
        a+=7;
        }
        else{
            printf("%d ",b);
            b+=6;
        }
        }
    return 0;
}
//==================Program to print the only desired term of series===================
// int main (){
//     int n,i,a=0,b=0;
//     printf("Enter the term ");
//     scanf("%d",&n);
//     for(i=1;i<n;i++){
//         if(i%2!=0){
//             a+=7;
//         }else{
//             b+=6;
//         }
//     }if(n%2==0)
//     printf("%d",b);
//     else
//     printf("%d",a);
//     return 0;
// }
//0 0 7 6 14 12 21 18 28 24 35 30 42 36 49 42 56 48 63 54 70 60 77 66 84 72 91 78 98 84 



