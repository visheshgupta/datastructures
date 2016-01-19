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
void addinter(struct linkList *head, int pos,int val)
{
	struct linkList *node=(struct linkList*) malloc(sizeof(struct linkList));
	node->data=val;
	int mkc=1;
	struct linkList *temp;
	while(mkc!=pos)
	{
		temp=head;
		head=head->next;
		mkc++;
	}
	temp->next=node;
	node->next=head;
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
struct linkList *deletefirst(struct linkList *x)
{
	struct linkList *temp;
	temp = x->next;
	free(x);
	return temp;
}
void display(struct linkList *node)
{
    while(node!=NULL)
    {
        printf("%d \n",node->data);
        node = node->next;
    }
}

void deleteinter(struct linkList *head,int pos)
{
	struct linkList *temp2;
	struct linkList *temp;
	int mkc=1;
	while(mkc!=pos)
	{
        temp=head;
		head=head->next;
		mkc++;
	}
/* */	temp2=head->next;
	free(head);
	temp->next=temp2;
}
void delbynum(struct linkList *head, int val)
{
	struct linkList *temp;
	while(head->next!=NULL)
	{
		temp=head;
		head=head->next;
		if(head->data==val)
		{
			temp->next=head->next;
			break;
		}

	}
	
}
int main()
{
	int pos,val;
    int sar,chse;
    struct linkList *head=(struct linkList*) malloc(sizeof(struct linkList));
    printf("list is empty. enter a value");
    scanf("%d",&sar);
    head->data=sar;
    head->next=NULL;
    while(1)
    {
        printf("choose\n");
        printf("\n1.push \n2.delete from first \n3.delete the last value \n4.display \n5.delete form inter. \n 6.addinter \n7.deletebynum");
        scanf("%d",&chse);
        switch(chse)
        {
            case 1:
                printf("enter the value");
                scanf("%d",&sar);
                push(head,sar);
                break;
            case 2:
				head = deletefirst(head);
                break;
			case 3:
                deletelast(head);
                break;
            case 4:
                display(head);
                break;
			case 5:
				printf("enter the position");
				scanf("%d",&pos);
				deleteinter(head,pos);
			    break;
			case 6:
				printf("enter the position to add");
				scanf("%d",&pos);
				printf("enter the value to add");
				scanf("%d",&val);
				addinter(head,pos,val);
				break;
			case 7:
				printf("enter the number to delete");
				scanf("%d",&val);
				delbynum(head,val);
				break;
        }
    }
}
