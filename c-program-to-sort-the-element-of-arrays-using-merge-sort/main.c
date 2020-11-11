/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// C Program to sort the element of arrays using Merge Sort..
#include <stdlib.h>
#include <stdio.h>
 
void merge(int *a,int l,int mid,int h)
{
    int *b=(int *)malloc((h+1)*sizeof(int));
    int i,j,k;
    i=k=l;
    j=mid+1;
    
    while(i<=mid&&j<=h){
    if(a[i]<a[j])
    {
        b[k]=a[i];
        k++;
        i++;
    }
    else
    {
        b[k]=a[j];
        k++;
        j++;
    }
    }
    while(i<=mid){
        b[k]=a[i];
        i++;
        k++;
    }
    while(j<=h){
        b[k]=a[j];
        j++;
        k++;
    }
    
    for (int i=l;i<=h;i++)
    {
        a[i]=b[i];
    }
    

    
}

void mergeSort(int *a,int l,int h){
    if(l<h)
    {
    int mid=(l+h)/2;
    mergeSort(a,l,mid);
    mergeSort(a,mid+1,h);
    merge(a,l,mid,h);
    }
}

int main()
{
    int n;
    
    printf("Enter the no. of elements in an array.\n");
    scanf("%d",&n);
    
    int a[n];
    printf("Enter the elements.\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    mergeSort(a,0,n-1);
    
    for(int i=0;i<n;i++)
    printf("%d  ",a[i]);
    
    return 0;
}
