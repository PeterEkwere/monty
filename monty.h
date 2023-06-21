#ifndef _MONTY_H_
#define _MONTY_H_

/** MACROS */
#define MAX_LENGTH 100

/** HEADER FILES **/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/** STRUCTURES **/

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/** POINTERS FOR STACK AND QUEUE **/
stack_t *top;
stack_t *front;
stack_t *back;


/** GLOBAL VARIABLE'S **/
extern instruction_t instruction[];
extern char line[MAX_LENGTH];
extern char command[MAX_LENGTH];
extern int value;
extern int line_number;
int *ptr;



/** FUNCTIONS **/
void handle_command(char *command, int line_number);
int file_function(int argc, FILE *file, int line_number);
void push(int arguments);
void fpush(stack_t **head, unsigned int line_number);
void fpal(stack_t **head, unsigned int line_number);
void pal(void);
void free_stack(stack_t *top);
int pint(void);
void fpint(stack_t **head, unsigned int line_number);
#endif
