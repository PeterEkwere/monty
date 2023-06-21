#include "monty.h"
/**
 * fpush - is a function that implement the push function
 * @head: is a pointer to the first node
 * @line_number: is the line being read from
 * Return: void
 */
void fpush(stack_t **head, unsigned int line_number)
{
	int argument;
	(void) head;
	(void) line_number;

	argument = *ptr;
	push(argument);

}
/**
 * push - is a function that pushes an item unto the stack
 * @argument: is an integer
 * Return: void
 */
void push(int argument)
{
	stack_t *new_node = (stack_t *)malloc(sizeof(stack_t));

	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->n = argument;

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		fclose(file);
		free_stack(top);
		free(ptr);
		exit(EXIT_FAILURE);
	}

	if (top == NULL)
	{
		top = new_node;
	}
	else
	{
		top->prev = new_node;
		new_node->next = top;
		top = new_node;
	}

}
