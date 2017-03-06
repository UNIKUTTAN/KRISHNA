#include<stdio.h>
#define malloc
#define start
void creation();
void insertion()
void deletion();
struct node
{
int num;
struct node *ptr;
};
typedef struct node NODE;
NODE *star;
start==(NODE *)malloc(sizeof(NODE));
start->num=20;
start->='\o';
void main()
{
   int item;
   do
   {
     printf("\nmenu:1.creation\nmenu2:2.insertion\nmenu:3.delection\nmenu:4.exit");
printf("enter any two operation from above menu");
scanf("%d",&item);
switch(item)
{
case 1:creation();
break;
case 2:insertion();
break;
case 3:deletion();
break;
default:
printf("enter any other operation");
}
   }
while(item!=4);	
}
void creation()
{
start->ptr=(NODE *)malloc(sizeof(NODE));
start->ptr.num=30;
start->ptr.ptr='\o';
}
void insertion()
{
    int value;
    printf("enter a number");
    scanf("%d",&value);
    NODE *ptr;
    ptr=(NODE *)malloc(sizeof(NODE));
    ptr->num=item;
    if(start==NULL
    ptr->Next=NULL;
    else
    ptr->Next=start;
    start=*ptr;
}
void deletion()
{
 NODE*PTR;
 if(start==NULL)
 {
 printf("the list is empty");
 }
 else
 {
 ptr=start;
 START=START->next
 printf("element deletion is %d",ptr->num);
 free(ptr);
 }
}

			

