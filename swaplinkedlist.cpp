#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 struct linkList{
	struct linkList *next;
	int data;
 };
 
void display(struct linkList *node)
{
    while(node!=NULL)
    {
        printf("%d \n",node->data);
        node = node->next;
    }
}

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

void swap(struct linkList *head, int x, int y)
{
	struct linkList *temp;
	struct linkList *n1;
	struct linkList *n2;
	while(head->next!=NULL)
	{
		n1=head;
		head=head->next;
		if(head->data==x)
		{
			while(head->next!=NULL)
			{
				n2=head;
				head=head->next;
				if(head->data==y)
				{
				//	n1->next = head;
					
					temp=n1->next;
					n1->next=n2->next;
					n1->next->next=n2; // 3
					n2->next=temp;
					n2->next->next=temp->next;
					break;
				}
			}
		}
	}
}


 int main()
 {		
	 int value;
	 int x,y;
	 int choose;
	 int pos;
	 struct linkList *head=(struct linkList*) malloc(sizeof(struct linkList));
	 printf("list is empty. please enter the first value\n");
	 scanf("%d",&value);
	 head->data=value;
	 head->next=NULL;
	 while(1)
	 {
		 printf("choose any option\n");
		 printf("1.Display \n2.Add \n3.AddInter \n4.Swap ");
		 scanf("%d",&choose);
		 switch(choose)
		 {
			 case 1: 
				display(head);
				break;
			 case 2:
				printf("enter the value");
				scanf("%d",&value);
				push(head,value);
				break;
			 case 3:
				printf("enter the position to add");
				scanf("%d",&pos);
				printf("enter the value to add");
				scanf("%d",&value);
				addinter(head,pos,value);
				break;
			case 4:
			printf("enter the value of first number");
			scanf("%d",&x);
			printf("enter the value of second number");
			scanf("%d",&y);
			swap(head,x,y);
		 }
	 }
	 
 }
