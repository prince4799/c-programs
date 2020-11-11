/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//C program to find the balance or equal point of sorted array.

#include <stdio.h>
#include <stdlib.h>


int balancePoint(int *a,int count)
{
   count--;
   return count/2;        //0 1 2 3 4
}

int balance(int a[],int n)
{
    int i=0,j=0;
    int *b=(int *)malloc(n*sizeof(int));

    for ( i;i<n,j<n;i++)
    {
        if(a[i]!=a[i+1])
        {
            b[j]=a[i];
            j++;
        }
    }
    b[j]='\0';
    if(j<n)
    {
    b[j]=a[n-1];
    while(j<n)
    {
    b[j]='\0';
    j++;
    }
    }
    
    for(i=0;b[i];i++)
        a[i]=b[i];
    
    a[i]='\0';
    
    while(i<n)
    {
    a[i]='\0';
    i++;
    }
    
   b=NULL;
   free(b);
}
int main()
{
    int n,count=0;
    printf("Enter the no. of elements.\n");
    scanf("%d",&n);
    
   int *a=(int *)malloc(n*sizeof(int));
  
    printf("Enter the elements of an array.\n");
    for (int i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    balance(a,n);
    
    for(int i=0;a[i]!='\0';i++)
    {
     count++;
     printf("%d ",a[i]);
    }
    
    // printf("\n %d is count",count);

    if(count%2==0)
    {
        printf("\nThere is no balance point");
        a=NULL;
        free(a);
        exit(0);
    }

    int point=balancePoint(a,count);
    printf("\n%d is the balance point",a[point]);
    
   a=NULL;
   free(a);
    return 0;
}


