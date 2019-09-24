#include<stdio.h>
#include<stdlib.h>
struct Node
{
int data;
struct Node *next;
};

struct Node *add_empty(struct Node *last, int data) 
{ 
    
    if (last != NULL) 
      return last; 
   
    struct Node *temp =  
           (struct Node*)malloc(sizeof(struct Node)); 
    
    temp -> data = data; 
    last = temp; 
    last -> next = last; 
  
    return last; 
} 
  
struct Node *add_start(struct Node *last, int data) 
{ 
    if (last == NULL) 
        return add_empty(last, data); 
  
    struct Node *temp =  
            (struct Node *)malloc(sizeof(struct Node)); 
  
    temp -> data = data; 
    temp -> next = last -> next; 
    last -> next = temp; 
  
    return last; 
} 
  
struct Node *add_end(struct Node *last, int data) 
{ 
    if (last == NULL) 
        return add_empty(last, data); 
      
    struct Node *temp =  
        (struct Node *)malloc(sizeof(struct Node)); 
  
    temp -> data = data; 
    temp -> next = last -> next; 
    last -> next = temp; 
    last = temp; 
  
    return last; 
} 


void
printlist (struct Node *last)
{
int count=0;
struct Node *p;
p=last->next;
printf("OUTPUT:");
do
{
printf ("%d ", p->data);
p = p->next;
}while(count++ < 15);
printf("\n");
return;
}




void
main ()
{
struct node *last = NULL;
int n, pos,ch;
while(1)
{
printf ("1.insert begin\n2.insert end\n3.print\n4.exit\nEnter your choice:\n");
scanf("%d",&ch);

switch(ch)
{
case 1:
printf ("enter the numbers to insert at beginning :");
scanf ("%d", &n);
last=add_start(last,n);

break;
case 2:
printf ("enter the numbers to insert at end :");
scanf ("%d", &n);
last=add_end(last,n);
break;
case 3:
printlist(last);
break;
case 4:
exit(1);
}
}
}
