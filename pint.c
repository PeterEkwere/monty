#include "monty.h"
/**
 * fpint - is a function that implement the pint function
 * @head: is a pointer to the first node
 * @line_number: is the line being read from
 * Return: void
 */
void fpint(stack_t **head, unsigned int line_number)
{
	(void) head;
	(void) line_number;
	if (pint() == -1)
	{
		fprintf(stderr, "L<%i>: can't pint, stack empty", line_number);
		exit(EXIT_FAILURE);
	}

}
/**
 * pint - is a function that prints the
 * item at the top of the stack
 * Return: void
 */
int pint(void)
{
	if (top == NULL)
	{
		return (-1);
	}
	else
	{
		fprintf(stdout, "%i\n", top->n);
	}
	return (0);
}
