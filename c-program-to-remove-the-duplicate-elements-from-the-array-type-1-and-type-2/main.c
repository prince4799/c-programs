/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//C program to remove the duplicate elements from the sorted array..Type 1
// This program Have the memory wastage problem.....
//There is alternate program is written just below this program......Type2
//It will work only for the sorted elements.

#include <stdlib.h>
#include <stdio.h>

int rmduplicate(int* a,int n)
{
    int i=0,j=0;
    while(i<n)
    {
        if(a[i]!=a[i+1])
        {
            a[j]=a[i];
            j++;
            i++;
        }
        else
        i++;
    }
  a[++j]=a[i-1];
  return j;
}
int main()
{
    int n,m;
    printf("Enter the no. of elements.\n");
    scanf("%d",&n);
    
    int a[n];
    printf("Enter the array elements.\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    m=rmduplicate(a,n);
    
    for(int i=0;i<m-1;i++)
    printf("%d ",a[i]);
 
//The output of the program is array with unique elements.  
// There is no way by which we can free the extra space of array.
//So if u print the whole array again 
//it prints the original array with removed duplicate elements from the starting point only.
    
    // printf("\n");
    // for(int i=0;i<n;i++)
    // printf("%d ",a[i]);

    return 0;
}
//====================================================================
//C Program to remove the duplicate elements from the array..Type -2||
//====================================================================

// This program uses dynamic memory allocation so we can easily deallocate the memory 
// There is no memory wastage unlike the previous one.

// #include <stdio.h>
// #include <stdlib.h>

// void rmDuplicate(int a[],int n)
// {
//     int i=0,j=0;
//     int *b=(int *)malloc(n*sizeof(int));
    
//     for ( i;i<n;i++)
//     {
//         if(a[i]!=a[i+1])
//         {
//             b[j]=a[i];
//             j++;
//         }
//     }

//     if(j<n)
//     {
//     b[j]=a[n-1];
//     while(j<n)
//     {
//     b[j]='\0';
//     j++;
//     }
//     }
    
//     b[j]='\0';
    
//     for(i=0;i<j;i++)
//         a[i]=b[i];
    
//      a[i]='\0';
     
//     while(i<n)
//     {
//     a[i]='\0';
//     i++;
//     }
    
//     b='\0';
//   free(b);
// }
// int main()
// {
//     int n;
//     printf("Enter the no. of elements.\n");
//     scanf("%d",&n);
    
//   int *a=(int *)malloc(n*sizeof(int));
//     printf("Enter the elements of an array.\n");
//     for (int i=0;i<n;i++)
//     scanf("%d",&a[i]);
   
//   rmDuplicate(a,n);
    
//     for (int i=0;a[i];i++)
//     printf("%d  ",a[i]);
    
//     a=NULL;
//     free(a);
    
//     return 0;
// }

