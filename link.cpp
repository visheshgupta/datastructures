//link list
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct linkList
{
	int data;
	struct listList *next;
};

void display(struct linkList *node)
{
	while(node!=NULL)
	{
		printf("%d \n",node->data);
		node = node->next;
	}
}

/*
void push(int newdata)
{
	struct linkList *newnode=(struct linkList*)malloc(sizeof(struct linkList));
	newnode->data=newdata;
	newnode->next=NULL;
}*/
int main()
{
struct linkList *first=(struct linkList*)malloc(sizeof(struct linkList));
	struct linkList *second=(struct linkList*)malloc(sizeof(struct linkList));
	struct linkList *third=(struct linkList*)malloc(sizeof(struct linkList));
    
	first->data=10;
	first->next=second;

	second->data=20;
	second->next=third;

	third->data=30;
	third->next=NULL;

	/*
	int sar;
	struct linkList *head=(struct linkList*)malloc(sizeof(struct linkList));
	printf("enter value of head node");
	scanf("%d",&sar);
	head->data=sar;
	head->next=NULL;
	int chse;
	while(1)
	{
	printf("choose from below\n");
	printf("1.push \n 2.display \n 3.exit");
	scanf("%d",&chse);
	switch(chse)
	{
		case 1:
			int val;
			printf("enter the value");
			scanf("%d",&val);
			push(val);
			break;
		case 2:
			display(head);
		default:
			break;
	}
}*/
display(first);
	getch();
}


