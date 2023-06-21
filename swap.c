#include "monty.h"
/**
 * fswap - is a function that implement the swap function
 * @head: is a pointer to the first node
 * @line_number: is the line being read from
 * Return: void
 */
void fswap(stack_t **head, unsigned int line_number)
{
	(void) head;
	(void) line_number;
	if (swap() == -1)
	{
		fprintf(stderr, "L%i: can't swap, stack too short\n", line_number);
		fclose(file);
		free_stack(top);
		free(ptr);
		exit(EXIT_FAILURE);
	}
}
/**
 * swap - is a function that swaps the top 2  data
 * item at the top of the stack
 * Return: void
 */
int swap(void)
{
	stack_t *temp = top;
	stack_t *first_item = top;
	stack_t *second_item = first_item->next;
	stack_t *container = malloc(sizeof(stack_t));

	int count = 0;

	while (temp != NULL)
	{
		count += 1;
		temp = temp->next;
	}
	if (count < 2)
	{
		return (-1);
	}

	container->n = first_item->n;
	first_item->n = second_item->n;
	second_item->n = container->n;
	free(container);
	return (0);
}
