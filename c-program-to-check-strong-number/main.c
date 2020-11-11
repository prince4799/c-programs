/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// C Program to check/print the strong number ...
#include <stdio.h>
int fact (int n){

    int res=1,i;
   
    if(n==1||n==0){
        return 1;
    }
    for (i=1;i<=n;i++){
        res=res*i;
       
    }
    return res;
}
 int sum(int k){
    int rem,val,sum=0;
    while(k){
        rem=k%10;
        val=fact(rem);
        sum+=val;
        k/=10;
    }
    return sum;
}
        //==========Program to check the strong number===========
 //comment it  to print the strong number all and un commment below  
int main()
{ 
    int n,i;
    printf("enter the number \n");    
    scanf("%d",&n);
    i=sum(n);
    if(i==n){
        printf("%d is strong number",i);
    }
    else
         printf("it's not a strong number");
    return 0;
}

//=====================Program to print all the strong number within a range=============
// int main()
// { 
//     int n,i,j;
//     printf("Enter upto where you want to print the strong number... \n");    
//     scanf("%d",&n);
//     for(j=1;j<=n;j++){
//     i=sum(j);
//     if(i==j){
//         printf("%d   ",i);
//     }
//     }
//     return 0;
// }
