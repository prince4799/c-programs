/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//C program to rotate the array by key's element...

#include <stdio.h>
#include <stdlib.h>

int *reverse(int a[],int pos,int n){
    int i,temp,j=n-1;
    for(i=pos;i<(n+pos)/2;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    return a;
}

int main()
{
    int n,key,*b; 
    b=(int *)malloc(n*sizeof(int));
    printf("Enter the no of elements..!\n");
    scanf("%d",&n);
    
    int a[n];
    printf("Enter the elements..!\n");
    
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    printf("Enter the no. by which you want to rotate the array..!\n");
    scanf("%d",&key);
    if(key>n){
        while(key>n)
        key%=n;
    }
    
    b=reverse(a,0,key);
    b=reverse(a,key,n);
    b=reverse(a,0,n);
    
    for (int j=0;j<n;j++)
    printf("%d ",a[j]);
    
    return 0;
}



