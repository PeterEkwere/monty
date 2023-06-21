#include "monty.h"
/**
 * fadd - is a function that implement the swap function
 * @head: is a pointer to the first node
 * @line_number: is the line being read from
 * Return: void
 */
void fadd(stack_t **head, unsigned int line_number)
{
	(void) head;
	(void) line_number;
	if (add() == -1)
	{
		fprintf(stderr, "L%i: can't add, stack too short\n", line_number);
		fclose(file);
		free_stack(top);
		free(ptr);
		exit(EXIT_FAILURE);
	}
}
/**
 * add - is a function that adds the top 2  data
 * item at the top of the stack
 * Return: void
 */
int add(void)
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

	second_item->n = first_item->n + second_item->n;
	pop();
	return (0);
}
