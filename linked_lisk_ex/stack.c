#include <stdio.h>
#include "stack.h"

struct stack_rec
{
	stack_data data;
	struct stack_rec *next;
};

struct stack_rec *top=NULL;

void stack_init()
{
	top=NULL;
};

void stack_clear()
{
	stack_data x;
	while (!stack_empty())
		x=stack_pop();
};

int stack_empty()
{
	if (top==NULL)
		return(1);
	else
		return(0);
};

void stack_push(stack_data d)
{
	struct stack_rec *temp;
	temp=(struct stack_rec *)malloc(sizeof(struct stack_rec));
	temp->data=d;
	temp->next=top;
	top=temp;
};

stack_data stack_pop()
{
	struct stack_rec *temp;
	stack_data d=0;
	if (!top==NULL)
	{
		d=top->data;
		temp=top;
		top=top->next;
		free(temp);
	}
	return d;
};



