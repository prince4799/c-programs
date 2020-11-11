/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//C Program to sort the elements of an array using quick sort..
#include <stdlib.h>
#include <stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int a[],int low,int high)
{
    int pivot=a[low];
    int i=low+1;
    int j=high;
    int temp;
   //looking for the elements which are smaller(i) than pivot and greater(j) than pivot(low).. 
   do{ 
       //move i fwd. till we don't find the element greater than pivot element.. 
    while(pivot>=a[i])
    i++;
    
    //move j bckwd. till we don't find the element smaller than pivot element.. 
    while(pivot<a[j])
    j--;
    
    //after finding such two elements we will swap them with each other.
    if(i<j)
   swap(&a[i],&a[j]);
   
    //this loop will halts when i>j i.e., i and j will cross each other.
   }while(i<j);
   
   //after failing or termination of the above loop we will swap the pivot element with the a[j].
   //here we want to see changes in our original array so instead of pivot we swap a[low] which is nothing but pivot.. 
    
    temp = a[low];
    a[low] = a[j];
    a[j] = temp;
    return j;
    // returning the position of pivot element.
}

int *quickSort(int a[], int low, int high)
{
    if(low<high)
    {
    int partitionIndex=partition(a,low,high);//looking for the index of pivot element..
    quickSort(a,low,partitionIndex-1);//calling quick sort for left sub array..leaving the pivot element
    quickSort(a,partitionIndex+1,high);//calling quick sort for right sub array..leaving the pivot element
    }
    return a;
}
int main()
{
    int n;
    printf("Enter the numbers of elements\n");
    scanf("%d",&n);

    int a[n],*b=(int *)malloc(n*sizeof(int));
    printf("Enter the elements \n");
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    quickSort(a,0,n-1);//calling quick sort function..
    
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    
    return 0;
}

//1, 4, 2, 4, 2, 4, 1, 2, 4, 1, 2, 2, 2, 2, 4, 1, 4, 4, 4


