/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//C program to reverse the string ...
#include <stdio.h>

int main()
{
    char a[100],b[100];
    int i,j,k;
    printf ("enter the string....");
    scanf("%s",a);
    for (i=0;a[i];i++);
    i=i-1;
    for(i,j=0;i>=0,j<100;j++,i--){
       b[j]=a[i]; 
    }
    printf("the original string is: %s\n",a);
    printf("the reverse string is %s",b);
    return 0;
}

