#include "monty.h"
/**
 * fmul - is a function that implement the multiply function
 * @head: is a pointer to the first node
 * @line_number: is the line being read from
 * Return: void
 */
void fmul(stack_t **head, unsigned int line_number)
{
	(void) head;

	if (multiply() == -1)
	{
		fprintf(stderr, "L%i: can't mul, stack too short\n", line_number);
		fclose(file);
		free_stack(top);
		free(ptr);
		exit(EXIT_FAILURE);
	}
}
/**
 * multiply- is a function that multiply the top 2  data
 * item at the top of the stack
 * Return: void
 */
int multiply(void)
{
	stack_t *first_item = top;
	stack_t *second_item = first_item->next;

	if (top == NULL || top->next == NULL)
	{
		return (-1);
	}
	else
	{
		second_item->n = second_item->n * first_item->n;
		pop();
	}
	return (0);
}
