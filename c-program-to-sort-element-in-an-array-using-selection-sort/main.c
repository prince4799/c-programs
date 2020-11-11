/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//C program to sort element in an array using insertion sort..

#include <stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void sort(int a[],int n)
{
 for(int i=0; i<n-1;i++)
 {
 for(int j=i+1; j<n;j++)
  {  
    if (a[j]<a[i])
    swap(&a[i],&a[j]);
  }
 }
}

int main()
{ 
    int n;
    printf("Enter the no. of elements.\n");
    scanf("%d",&n);
    int a[n];
    
    printf("Enter the elements of an array.\n");
    for(int i=0; i<n;i++)
    scanf("%d",&a[i]);
    sort(a,n);
    
    for(int i=0; i<n;i++)
    printf("%d  ",a[i]);  
    return 0;
}

