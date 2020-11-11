/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//C program to sort the array using bubble sort..

#include <stdio.h>

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void bubbleSort(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            swap(&a[j],&a[j+1]);
        }
    }
}
int main()
{
    int n;
    printf("Enter the no. of elements\n");
    scanf("%d",&n);

   int a[n];
   printf("Enter the array.\n");
   
   for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    bubbleSort(a,n);
    
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    
    return 0;
}

