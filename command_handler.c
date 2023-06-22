#include "monty.h"
/**
 * handle_command - is a function that calls
 * corresponding function for opcodes
 *
 * @command: is the command
 * @line_number: is indicates what line in the file
 * The function is being called from
 *
 * Return: Void
 *
 */
void handle_command(char *command, int line_number)
{
	int index = 0;
	instruction_t instruction[] = {
		{"push", fpush},
		{"pall", fpal},
		{"pint", fpint},
		{"pop", fpop},
		{"swap", fswap},
		{"add", fadd},
		{"nop", fnop},
		{"div", fdiv},
		{"sub", fsub},
		{"mul", fmul},
		{NULL, NULL}
	};

	while (instruction[index].opcode != NULL)
	{
		if (strcmp(instruction[index].opcode, command) == 0)
		{
			instruction[index].f(&top, line_number);
			break;
		}
		index++;
	}
}
