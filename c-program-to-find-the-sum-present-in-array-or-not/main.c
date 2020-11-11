/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//C program to find the sum present in array or not
#include <stdio.h>

int main()
{
    int n,sum,count=0,max=0,min=0;
    printf("Enter the numbers of elements..\n");
    scanf("%d",&n);
    
    int a[n];
    printf("Enter the array..\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    printf("Enter the sum which is to be found in array:  ");
    scanf("%d",&sum);
    
    for(int i=0; i<n;i++)                    //4 5 1 2 3 
    {
    if(a[i]>a[i+1])
    {
       max=i;
       min=i+1;
       break;
    }
    }
    while(max!=min){
        if(a[max]+a[min]<sum)
          {
              min++;
              if(min==n-1)
              min=0;
          }
        if(a[max]+a[min]>sum)
          {
              max--;
              if(max==0)
              max=n-1;
          }
        if(a[max]+a[min]==sum)
         {
               printf("%d,%d",a[max],a[min]);
               break;
         }
    }
    
  
    return 0;
}
