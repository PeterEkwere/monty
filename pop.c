#include "monty.h"
/**
 * fpop - is a function that implement the pop function
 * @head: is a pointer to the first node
 * @line_number: is the line being read from
 * Return: void
 */
void fpop(stack_t **head, unsigned int line_number)
{
        (void) head;
        (void) line_number;
        if (pop() == -1)
        {
                fprintf(stderr, "L<%i>: can't pop an empty stack", line_number);
                exit(EXIT_FAILURE);
        }

}
/**
 * pint - is a function that prints the
 * item at the top of the stack
 * Return: void
 */
int pop(void)
{
	stack_t *temp;

        if (top == NULL)
        {
                return (-1);
        }
        else
        {
		temp = top;
		top = top->next;
		free(temp);
                
        }
        return (0);
}
