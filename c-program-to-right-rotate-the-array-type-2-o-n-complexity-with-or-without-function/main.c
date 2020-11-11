/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//C program to right rotate the array Type2 O(n)-complexity without function.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,key;
   
    printf("Enter the no. of elements\n");
    scanf("%d",&n);
    
    int a[n];
    printf("Enter the elements\n");
    
    for (int i=0;i<n;i++)
    scanf("%d",&a[i]);
                                                    // 3 2 1 4 5 = 5 4 1 2 3 
    printf("Enter the key\n");
    scanf("%d",&key);
    
    if(key<1){
        printf("INVALID INPUT");
        return 0;
    }

    int temp=0;
    for(int i=0;i<(n-key)/2;i++){
        temp=a[i];
        a[i]=a[n-key-i-1];
        a[n-key-i-1]=temp;
    }
    
    for (int i=0;i<n/2;i++){
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    for (int i=0;i<n;i++)
    printf("%d  ",a[i]);
    return 0;
}

//=============================================================================================

//C program to right rotate the array Type2 O(n)-complexity with function.
//Uncomment below program before use.

// #include <stdio.h>
// #include <stdlib.h>

// int *rev(int a[],int n){
//     int temp;
    
//     for (int i=0;i<n/2;i++){
//         temp=a[i];
//         a[i]=a[n-i-1];
//         a[n-i-1]=temp;
//     }
//     return a;
// }

// int main()
// {
//     int n,key;
   
//     printf("Enter the no. of elements\n");
//     scanf("%d",&n);
    
//     int a[n];
//     printf("Enter the elements\n");
    
//     int *b=(int *)malloc(n*sizeof(int));            //1 2 3 4 5 =5 4 1 2 3
    
//     for (int i=0;i<n;i++)
//     scanf("%d",&a[i]);
//                                                     // 3 2 1 4 5 = 5 4 1 2 3 
//     printf("Enter the key\n");
//     scanf("%d",&key);
    
//     if(key<1){
//         printf("INVALID INPUT");
//         return 0;
//     }
    
//       b=rev(a,n-key);
//       b=rev(a,n);
//     for (int i=0;i<n;i++)
//     printf("%d  ",b[i]);
//     return 0;
// }

