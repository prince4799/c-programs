/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//C program to print the Armstrong numbers...
#include <stdio.h>

int main()
{
    int n,rem,arm=0,cpy,j;
    printf("Enter the numbers upto which you want to print the armstrong numbers...\n");
    scanf("%d",&n);
    for(j=1;j<n;j++){
    cpy=j;
    arm=0;
    while(cpy){
        rem=cpy%10;
        arm=arm+rem*rem*rem;
        cpy/=10;
    }if(arm==j){
        printf("%d ",j);
    }}
    return 0;
}
// ============Program To check whether the no. is prime or not============
// int main()
// {
//     int n,rem,arm=0,cpy,j;
//     printf("Enter the numbers upto which you want to print the armstrong numbers...\n");
//     scanf("%d",&n);
//     cpy=n;
//     while(cpy){
//         rem=cpy%10;
//         arm=arm+rem*rem*rem;
//         cpy/=10;
//     }if(arm==n){
//         printf("%d is a armstrong number",n);
//     }else
//     printf("%d is not a armstrong number",n);
//     return 0;
// }
