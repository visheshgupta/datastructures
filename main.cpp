#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct linkList
{
    struct linkList *next;
    int data;
};
void push(struct linkList *newhead,int newdata)
{
    struct linkList *newnode=(struct linkList*) malloc(sizeof(struct linkList));
    newnode->data=newdata;
    newnode->next=NULL;
    while(newhead->next!=NULL)
    {
        newhead = newhead->next;
    }
    newhead->next = newnode;

}
void deletelast(struct linkList *x)
{
    struct linkList *j;
    while(x->next!=NULL)
    {
        j=x;
        x=x->next;
    }
    j->next=NULL;

}
void display(struct linkList *node)
{
    while(node!=NULL)
    {
        printf("%d \n",node->data);
        node = node->next;
    }
}
int main()
{
    int sar,chse;
    struct linkList *head=(struct linkList*) malloc(sizeof(struct linkList));
    printf("list is empty. enter a value");
    scanf("%d",&sar);
    head->data=sar;
    head->next=NULL;
    while(1)
    {
        printf("choose\n");
        printf("\n1.push \n2.delete the last value \n3.display");
        scanf("%d",&chse);
        switch(chse)
        {
            case 1:
                printf("enter the value");
                scanf("%d",&sar);
                push(head,sar);
                break;
            case 2:
                deletelast(head);
                break;
            case 3:
                display(head);
                break;
        }
    }
}
