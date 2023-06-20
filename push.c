#include "monty.h"
/**
 * fpush - is a function that implement the push function
 * @head: is a pointer to the first node
 * @line_number: is the line being read from
 * Return: void
 */
void fpush(stack_t **head, unsigned int line_number)
{

	int digit = atoi(argument);
	push(digit);

}
/**
 * push - is a function that pushes an item unto the stack
 * @argument: is an integer
 * Return: void
 */
void push(int argument)
{
	stack_t *new_node = (stack_t *)malloc(sizeof(stack_t));
	
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	if (head == NULL)
	{
		head = new_node;
	}
	else
	{
		head->prev = new_node;
		new_node->next = head;
		head = new_node;
	}

}
