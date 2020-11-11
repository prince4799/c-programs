/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
struct stack{      //stack is defined
    int data ;
    struct stack *next;
    
};

struct stack *top=NULL ;
struct stack *cur=NULL;

struct stack *push( struct stack * head,int val){
    struct stack * node = malloc(sizeof(struct stack ));
    node->data=val;
    node->next=NULL;
    head=node;
   return head;
}

struct stack *show( struct stack * head){
    while()
   return head;
}

int main()
{
    int choice,n,i,val;
    
    // head=NULL;
    
  printf("choose option \n");
  printf("1 : push\n2 : pop\n");
   scanf("%d",&choice);
   switch(choice){
      case  1:
         printf("enter how many no. you want to push \n");
         scanf("%d",&n);
         for (i=0;i<n;i++){
         printf("enter the-%d element:\n",i+1);
         scanf("%d",&val);
        cur= push( top, val);
          }
        break;
      case  2:
         printf("enter , how many items do you want to pop\n");
         scanf("%d",&n);
         for (i=0;i<n;i++){
             cur=pop(  head);
             
         }
      break;
      default:
      printf("Wrong choice");
  }
    return 0;
}
