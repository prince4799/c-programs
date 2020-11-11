/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//This program includes both types with or without function.


//C program to right rotate the array by key element Type 1 with ...O(n*key) complexity


#include <stdio.h>
#include <stdlib.h>
int main()
{                                                          
  int n,key;
  
  printf("Enter the no.of elements..\n");
  scanf("%d",&n);                                         
  int a[n];
  printf("Enter the elements\n");
  
  for (int i=0;i<n;i++)
  scanf("%d",&a[i]);
  
  printf("Enter the Key\n");
  scanf("%d",&key);
  
  
   
   if(key>n){
       while(key<n){
           key%=n;
       }
   }
   
  int temp;

  for (int i=0;i<key;i++){
        temp=a[n-1];
        for(int j=n-1;j>=0;j--){
            a[j]=a[j-1];
        }
          a[0]=temp; 
  }

   for (int i=0;i<n;i++)
   printf("%d ",a[i]);
  
  return 0;
}

//============================================================================================
//C program to rotate the array right using fuction..

// #include <stdio.h>
// #include <stdlib.h>
// int *rightRotate(int a[],int n, int key){
//      int temp;

//   for (int i=0;i<key;i++){
//         temp=a[n-1];
//         for(int j=n-1;j>=0;j--){
//             a[j]=a[j-1];
//         }
//           a[0]=temp; 
//   }
//     return a;
// }
// int main()
// {                                                          
//   int n,key,*b;
  
//   printf("Enter the no.of elements..\n");
//   scanf("%d",&n);                                        
//   b=(int *)malloc(n*sizeof(int));                               
//   int a[n];
//   printf("Enter the elements\n");
  
//   for (int i=0;i<n;i++)
//   scanf("%d",&a[i]);
  
//   printf("Enter the Key\n");
//   scanf("%d",&key);
   
   
//     b=rightRotate(a,n,key);
//   for (int i=0;i<n;i++)
//   printf("%d ",b[i]);
  
//   return 0;
// }

