//C program to check whether a no. is palindrome or not 

#include<stdio.h>
#include<conio.h>
#include<stdlib.h> //it includes the definition of exit....
 
 int main(){
     int n=0,copy, rem=0, rev=0;
     printf("enter the no.\n");
     scanf("%d",&n);
     if(n<=9){
         printf("please inputs no. greater than 9");    // or you can also print the no. using  printf("the  palindrome of your no. is %d",n)
         exit;                  //if the user provides single digit no. we can simlpy print that no. and exit the program
     }
     else{
     copy=n;
     while(n){
         rem=n%10;
         rev=rev*10+rem;
         n/=10;
     }
      if(copy==rev){
         printf("the no. is palindrome....");
     }else {
         printf("the no. is not a palindrome....");
     }
     }
    
     return 0;
 }
