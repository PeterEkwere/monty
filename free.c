#include "monty.h"
/**
 * free_stack - is a function that frees the stack
 * @top: is a pointer to the first node
 * Return: void
 */
void free_stack(stack_t *top)
{
	stack_t *temp = top;
	stack_t *t;

	while (temp != NULL)
	{
		t = temp;
		temp = temp->next;
		free(t);
	}
}
