#include "monty.h"
/**
 * fpush - is a function that implement the push function
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
 * push - is a function that pushes an item unto the stack
 * @argument: is an integer
 * Return: void
 */
void pal(void)
{
	stack_t *temp = top;

        if (top == NULL)
        {
                exit(EXIT_FAILURE);
        }
        else
        {
		while(temp != NULL)
		{
			fprintf(stdout, "%i\n", temp->n);
			temp = temp->next;
		}
                
        }

}
