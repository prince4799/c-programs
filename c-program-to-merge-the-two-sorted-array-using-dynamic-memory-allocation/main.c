/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// C Proggram to merge the two sorted Array...Using dynamic memory allocation.

#include <stdio.h>
#include <stdlib.h>

void merge(int *a, int *b, int *c, int size1,int size2)
{
    int i=0,j=0,k=0;
    
  while(k<size2&&j<size1&&i<(size1+size2))
   {
   
       if(a[j]<=b[k])
       {
          c[i]=a[j];
          j++;
          i++;
       }
       else if(b[k]<a[j])
       {
        c[i]=b[k];
        k++; 
        i++;
       }
   }
   
   while(j<size1&&i<(size1+size2))
   {
       c[i]=a[j];
       i++;
       j++;
   }
    while(k<size2&&i<(size1+size2))
   {
       c[i]=b[k];
       i++;
       k++;
   }
   
   c[i]='\0';
   
   while(i<(size1+size2))
   {
       c[i]='\0';
       i++;
   }
   
}
int main()
{
    int *a,*b,n1,n2;
    printf("Enter the size of array1.\n");
    scanf("%d",&n1);
    
    a=(int *)malloc(sizeof(int)*n1);
    printf("Enter the first array.\n");
    for (int i=0;i<n1;i++)
    scanf("%d",&a[i]);
    
    printf("Enter the size of array2.\n");
    scanf("%d",&n2);
    
    b=(int *)malloc(sizeof(int)*n2);
   
    printf("Enter the second array.\n");
    for (int i=0;i<n2;i++)
    scanf("%d",&b[i]);
        
     int n3=n1+n2;
     int *c=(int*)malloc(sizeof(int)*n3);
     merge(a,b,c,n1,n2);
     
     for(int i=0;c[i];i++)
     printf("%d  ",c[i]);
     
        a=NULL;
        b=NULL;
        c=NULL;
        free(a);
        free(b);
        free(c);

    return 0;
}
