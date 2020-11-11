/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char a[30],b[30],c[30],i;
   printf("Enter the string\n");
    scanf("%s",a);
    scanf("%s",b);
    scanf("%s",c);
   for(i=0;a[i]!='\0';i++)
   {
       if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
       a[i]='%';
   }
    for(i=0;b[i]!='\0';i++)
   {
       if(!(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u'))
       b[i]='#';
   }
    for(i=0;c[i]!='\0';i++)
   {  if(c[i]<'z'&&c[i]>'a')
       c[i]-=32;
   }
   printf("%s%s%s",a,b,c);
    return 0;
}
//h%wa#eYOU.