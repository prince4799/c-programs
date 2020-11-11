/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// C program to check whether a string is alphanumeric or not....using c11 &c99 type 1.

#include <stdio.h>

int main()
{
    char a[100];
    int i,flag1=0,flag2=0,k=0,l=0;
    printf("enter the alphanumeric...\n");
    fgets(a,100,stdin);
    for (i=0;a[i];i++)
    {   
            flag1=(a[i]>='a'&&a[i]<='z')?1:0;
            flag1= (a[i]>='A'&&a[i]<='Z')?1:0;
            flag2= (a[i]>='0'&&a[i]<='9')?1:0;
         if(flag1 &&flag2)
             {
              printf("\nthe string is alphanumeric");
              return 0;
             }
        }
    printf("\nthe string is not alphanumeric");
    return 0;
}

