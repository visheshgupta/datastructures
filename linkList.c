//link list
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct linkList
{
	int data;
	struct listList *next;
};

void display(struct linkList* node)
{
	while(node!=NULL)
	{
		printf("%d \n",node->data);
		node=node->next;
	}
}
void push(struct linkList *newnode, int newdata)
{
	struct linkList *newnode=(struct linkList*)malloc(sizeof(struct linkList));
	newnode->data=newdata;
	newnode=newnode->next;
}
int main()
{
/*	struct linkList *first=(struct linkList*)malloc(sizeof(struct linkList));
	struct linkList *second=(struct linkList*)malloc(sizeof(struct linkList));
	struct linkList *third=(struct linkList*)malloc(sizeof(struct linkList));
    
	first->data=10;
	first->next=second;

	second->data=20;
	second->next=third;

	third->data=30;
	third->next=NULL;
	*/
	int chse;
	printf("choose from below\n");
	printf("1.push \n 2.pop \n 3.exit");
	scanf("%d",&chse);
	switch(chse)
	{
		case 1:
			int val;
			printf("enter the value");
			scanf("%d",&val);
			push(head ,val);
			break;
		case 2:
			break;
		default:
			break;
	}
	
	display(first);
	getch();
}


