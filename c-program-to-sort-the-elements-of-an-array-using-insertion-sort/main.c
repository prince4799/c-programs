/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//C Program to sort the elements of an array using insertion sort..
#include <stdlib.h>
#include <stdio.h>                                


void insertionSort(int a[], int n)
{
for(int i=1;i<n;i++){
      int temp=a[i];
      int j=i-1;
      while((temp<a[j])&&(j>=0)){
         a[j+1]=a[j];
         j=j-1;
      }
      a[j+1]=temp;
  }
  
}

int main()      
{
    int n;
    printf("Enter the numbers of elements\n");
    scanf("%d",&n);

    int a[n];
    printf("Enter the elements \n");
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    insertionSort(a,n);
    
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    
    return 0;
}


