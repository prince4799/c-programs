/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//C program to rotate the array with given keys..

#include <stdio.h>

int main()
{
    int n,key,i;
    printf("Enter the no. of elements..!\n");
    scanf("%d",&n);
    
     if(n<1){
        printf("INVALID No. OF ELEMENTS");
        return 0;
    }
    
    int a[n];            //firstly we must have the value in 'n' then only we can declare the array of size 'n'
                         //otherwise it will give us error of type core dumped 
                         //since 'n' can have the GV which may be more than the available memory..
    printf("Enter the %d elements \n",n);
    
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    printf("Enter the key\n");
    scanf("%d",&key);
    
    if(key<0||key>n){
        printf("INVALID KEY");
        return 0;
    }
    
    int temp[key];       //firstly we must have the value in 'key' then only we can declare the array of size 'key'
                         //otherwise it will give us error of type core dumped 
                         //since 'key' can have the GV which may be more than the available memory..
    
    for(i=0;i<key;i++)
    temp[i]=a[i];                               //storing the first key's element..
    
    for(i=0;i+key<n;i++)                        //rotating our array
    a[i]=a[i+key];
    
    for(int j=n-key,i=0;j<n,i<key;j++,i++)
    a[j]=temp[i];                               //restoring the temp elements to the array.. 
    
    for(int k=0;k<n;k++)
    printf("%d->",a[k]);
    return 0;
}
