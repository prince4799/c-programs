/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *link;
};
int main()
{
  typedef struct node Node;
  Node *start,*first,*second,*ptr;
  start=(Node*)malloc(sizeof(Node));
  first=(Node*)malloc(sizeof(Node));
  second=(Node*)malloc(sizeof(Node));
    first->data=1;
    first->link=second;
    second->data=3;
    second->link=NULL;
    start=first;
     printf("%d\n",start->link);
    ptr=start;
        while(ptr!=NULL)
        {

          printf("%d\n",ptr->data);
          ptr=ptr->link;
    
        }
    
    return 0;
}
