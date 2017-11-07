// C program for implementation of stack using Array
// Name:Dilip kumar sharma,		Date:6/11/17

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// structure for stack
typedef struct Stack
{
	int top;
	unsigned size;
	int *array;
}Stack;

// Creating a stack of a given size
Stack* createStack(unsigned size)
{
	Stack *stack = (Stack*) malloc(sizeof(struct Stack));
	stack->size = size;
	stack->top = -1;
	stack->array = (int*) malloc(sizeof(int));
	return stack;
}

// is stack empty/lower boundation check
bool isEmpty(Stack *stack)
{	return stack->top == -1;}

// is stack Full/Upper boundation check
bool isFull(Stack *stack)
{	return stack->top == stack->size -1; }

// Add an item to stack
void push(Stack *stack, int item)
{
	if (isFull(stack))
	{
		printf("opps ! stack is Full. \n");
		return;
	}
	stack->array[++stack->top] = item; 
	printf("%d pushed to stack \n", item);
}

//Remove an item from stack.
int pop(Stack *stack)
{
	if(isEmpty(stack))
	{
		printf("oops ! stack is empty. \n");
		return 0;
	}
	int *position = &stack->top;
	return stack->array[stack->top--];
	free(position);
}

//Display last item of  stack
void peek(Stack *stack)
{
	printf("%d last item of stack",stack->top);
}

//main programme
int main(){
	Stack *stack = createStack(100);
	push(stack, 10);
	push(stack, 20);
	push(stack, 30);
	printf("%d popped from stack\n", pop(stack));
	return 0;
}

