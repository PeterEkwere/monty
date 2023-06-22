#include "monty.h"
/**
 * fdiv - is a function that implement the div function
 * @head: is a pointer to the first node
 * @line_number: is the line being read from
 * Return: void
 */
void fdiv(stack_t **head, unsigned int line_number)
{
	(void) head;
	(void) line_number;

	if (divide() == -1)
	{
		fprintf(stderr, "L%i: can't div, stack too short\n", line_number);
		fclose(file);
		free_stack(top);
		free(ptr);
		exit(EXIT_FAILURE);
	}
}
/**
 * divide - is a function that divides the top 2  data
 * item at the top of the stack
 * Return: void
 */
int divide(void)
{
	stack_t *first_item = top;
	stack_t *second_item = first_item->next;

	if (top == NULL || top->next == NULL)
	{
		return (-1);
	}
	else if (first_item->n == 0)
	{
		fprintf(stderr, "L%i: division by zero\n", *line_num_ptr);
		fclose(file);
		free_stack(top);
		free(ptr);
		exit(EXIT_FAILURE);
	}
	else
	{
		second_item->n = second_item->n / first_item->n;
		pop();
	}
	return (0);
}
