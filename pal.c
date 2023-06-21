#include "monty.h"
/**
 * fpal - is a function that implement the pal function
 * @head: is a pointer to the first node
 * @line_number: is the line being read from
 * Return: void
 */
void fpal(stack_t **head, unsigned int line_number)
{
	(void) head;
	(void) line_number;
	pal();

}
/**
 * pal - is a function that prints all item from stack
 * Return: void
 */
void pal(void)
{
	stack_t *temp = top;

	if (top == NULL)
	{
		fclose(file);
		free_stack(top);
		free(ptr)
		exit(EXIT_FAILURE);
	}
	else
	{
		while (temp != NULL)
		{
			fprintf(stdout, "%i\n", temp->n);
			temp = temp->next;
		}
	}
}
