/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// C program to rotate the array cyclically
#include <stdio.h>
 
 int *rotate_array(int a[], int n,int key){ 
     
        int temp;        
        
        for (int j=0;j<key;j++){
        temp=a[0];
        for (int i =0;i<n;i++){
            a[i]=a[i+1];
        }
            a[n-1]=temp;        
        }
     return a;
 }
int main()
{
    int n,key;
    printf("Enter the no. of elements..!\n");
    scanf("%d",&n);
    
    int a[n];
    printf("Enter the %d elelments\n",n);
    
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    printf("Enter the key by which you want to rotate the array");
    scanf("%d",&key);
    
    if(key>=n){
    while(key>=n)
        key%=n;
    }
    
    int *b=rotate_array(a,n,key);
    
    for(int i=0;i<n;i++)
    printf("%d  ",b[i]);
    return 0;
}


