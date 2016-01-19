// stack
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<limits.h>
#include<stdlib.h>
struct Stack{
	int top;
	unsigned capacity;
	int* array;
};

struct Stack *createStack(unsigned capacity)
{
	struct Stack* x=(struct Stack*) malloc(sizeof(struct Stack));
	x->capacity=capacity;
	x->top=-1;
	x->array=(int*)malloc(x->capacity*sizeof(int));
	return x;
}
int full(struct Stack* x)
{
	return x->top == x->capacity-1;
}
int empty(struct Stack* x)
{
	return x->top ==-1;
}
void push(struct Stack* x, int val)
{
	if(full(x))
	{
		printf("stack is full\n ");
		return;
	}
	x->array[++x->top]=val;
	printf("%d is pushed\n",val);
}
int pop(struct Stack *x)
{
	if(empty(x))
	{
		printf("stack is empty");
		return INT_MIN; 
	}
	return x->array[x->top--];
}
int peek(struct Stack* x)
{
	if(empty(x))
	{
	printf("stack is empty");;
	return INT_MIN;
	}
	return x->array[x->top];
}
int main()
{
	int total;
	int chse;
	int num;
	printf("enter the size of the stack");
	scanf("%d",&total);
	struct Stack* stack=createStack(total);
	printf("stack size is: %d",total);
	while(chse!=3)
	{
    printf("\n Choose from below\n ");
	printf("1.push \n 2.pop \n 3. exit");
	scanf("%d",&chse);
	switch(chse)
	{
		case 1:
			printf("enter number to push\n");
			scanf("%d",&num);
			push(stack,num);
			break;
		case 2:
			printf("%d is popped from stack \n",pop(stack));
			break;
		default:
			break;
	}
}
	printf("top item of stack is %d\n",peek(stack));
	getch();
	return 0;
}
