#include "monty.h"
/**
 * fsub - is a function that implement the sub function
 * @head: is a pointer to the first node
 * @line_number: is the line being read from
 * Return: void
 */
void fsub(stack_t **head, unsigned int line_number)
{
	(void) head;
	(void) line_number;
	if (sub() == -1)
	{
		fprintf(stderr, "L%i: can't sub, stack too short\n", line_number);
		fclose(file);
		free_stack(top);
		free(ptr);
		exit(EXIT_FAILURE);
	}
}
/**
 * sub - is a function that subs the top 2  data
 * item at the top of the stack
 * Return: void
 */
int sub(void)
{
	stack_t *temp = top;
	stack_t *first_item = top;
	stack_t *second_item = first_item->next;

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

	second_item->n = second_item->n - first_item->n;
	pop();
	return (0);
}
