/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// C Program to search the element in sorted and rotated array...

#include <stdio.h>
#include  <stdlib.h>
int search(int a[],int found,int l,int h)      
{                                                  
   int mid=(l+h)/2;                                
    while(found!=a[mid])
    {
        if(found<a[mid])
        h=mid+1;
        if(found>a[mid])
        l=mid+1;
        mid=(l+h)/2;
        if(l>=h)
        break;
    }
    if(a[mid]!=found){
        printf("Not found\n");
        exit(0);
    }
    return mid+1;
}

int main()  
    
{           
    int n,key,found,res;  
    printf("Enter the number of element to be entered.\n");
    scanf("%d",&n);
    
    int a[n];
    printf("Enter the array\n");
    for(int i=0;i<n;i++)
     scanf("%d",&a[i]);
    
    printf("Enter the element to be searched.\n");
     scanf("%d",&found);
    
    printf("Enter the position through which the array rotated\n");
     scanf("%d",&key);                      //0 1 2 3 4
                                            //5 4 3 2 1
        while(key>n)
        key%=n;
    
    int pivot=key-2;
    if(found==a[pivot])
    {
        printf("%d element id found at %d",found,pivot+1);
        return 0;
    }
    if(found>=a[0]&&found<a[pivot]){
       res=search(a,found,0,pivot);
       printf("%d element id found at %d",found,res);
        return 0;
    }
    
     if(found<a[0]&&found<a[pivot]){
        res=search(a,found,pivot+1,10);
        printf("%d element id found at %d",found,res);
        return 0;
    }
    else{
        printf("Not found");
    }
    return 0;
}



