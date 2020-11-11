/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//C Program to Check whether the given poin lies within the circle or not.
//Without finding out the triangle Area..


#include <stdio.h>

int max(int a, int b, int c)
{
    if(a>b&&a>c)
    return a;
    
    if(b>c)
    return b;
    
    return c;
}

int min(int a, int b, int c)
{
    if(a<b&&a<c)
    return a;
    
    if(b<c)
    return b;
    
    return c;
}

int main()
{
    int x1,y1,x2,y2,x3,y3;
    int f_pointX,f_pointY;
    printf("Enter the points of Triangle below:\n");
   
    printf("Enter the first point X1 and Y1:\n "); 
     scanf("%d%d",&x1,&y1);
    printf("\nEnter the second point X2 and Y2 :\n ");
     scanf("%d%d",&x2,&y2);
    printf("\nEnter the third point X3 and Y3:\n ");
     scanf("%d%d",&x3,&y3);
     
     printf("Enter the point to be find.\n");
     scanf("%d%d",&f_pointX,&f_pointY);
     
    int maxX=max(x1,x2,x3);
    int minX=min(x1,x2,x3);
    int minY=min(y1,y2,y3);
    int maxY=max(y1,y2,y3);
    
    // Here we check only whether the given points lies within the range or not.
    
    if(f_pointX>minX&&f_pointX<maxX&&f_pointY>minY&&f_pointY<maxY)
     {
         printf("the point is inside the triangle\n");
         return 0;
     }     
        printf("The point is outside of the triangle\n ");
    return 0;
}

