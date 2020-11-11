// /******************************************************************************

// Welcome to GDB Online.
// GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
// C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
// Code, Compile, Run and Debug online from anywhere in world.

// *******************************************************************************/
// //C Program to sort the elements using counting sort..

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int max(int a[],int n)
{
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>max)
        max=a[i];
    }
    return max;
}

void countSort(int a[],int n)
{
    int l,i,j;
    l= max(a,n);
    int *count=(int *)malloc((l+1)*sizeof(int));
 
 for(i=0;i<l+1;i++)
    count[i]=0;
  
  for(i=0;i<n;i++)
    count[a[i]]++;
    
     j=i=0;
   
   while(i<=l)
   {
       if(count[i]>0)
       {
        a[j]=i;
        count[i]--;
        j++;
       }
       else
       {
         i++;
       }
   
   }
         
}

int main()
{
    int n;
    printf("Enter the no. of elements of array.\n");
    scanf("%d",&n);
    
    int a[n];
    printf("Enter the elements of an array.\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);

    countSort(a,n);
    
    for(int i=0;i<5;i++)
     printf("%d ",a[i]);
   
    
    return 0;
}




