#include<stdio.h>
#include<stdlib.h>
struct Node
{
int data;
struct Node *next;
};
void
insert_end (struct Node **head, int new_data)
{

struct Node *new_node = (struct Node *) malloc (sizeof (struct Node));
struct Node *last = *head;
new_node->data = new_data;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
return;
}
while (last->next != NULL)
last = last->next;
last->next = new_node;
//free(new_node);
return;
}

void mid(struct Node *head)
{
struct Node *fptr=head;
struct Node *sptr=head;

while(fptr->next!=NULL && fptr->next->next!=NULL)
{
sptr=sptr->next;
fptr=fptr->next->next;


}
printf("%d",sptr->data);
}


void
printlist (struct Node *node)
{
printf("OUTPUT:");
while (node != NULL)
{
printf ("%d ", node->data);
node = node->next;
}
printf("\n");
return;
}

void
main ()
{
int n;
struct node *head = NULL;
printf ("enter the numbers to insert :");
while(1)
{
scanf ("%d", &n);
if(n!=-1)
{
insert_end (&head, n);
}
if(n==-1)
break;
}
printlist(head);
mid(head);
}
