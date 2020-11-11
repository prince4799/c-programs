/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//C Program to find the area of a given triangle..

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int areaTriangle(int x1,int y1,int x2,int y2,int x3,int y3)
{
    float area;
    area=abs((x1*(y2-y3)+x2*(y3-y1)+x3*(y2-y1))/2.0);
    return area;
}

int main()
{
   int x1,x2,y1,y2,x3,y3;
   printf("Enter the points of a triangle\n");
    scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
    printf("%d is area of triangle..",areaTriangle(x1,y1,x2,y2,x3,y3));
    return 0;
}
//(10, 10), (10, -10), (-10, -10)
            