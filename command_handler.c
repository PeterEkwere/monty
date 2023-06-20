#include "monty.h"
/**
 *
 */
void handle_command(char *command, int argument, int line_number)
{
	int index = 0;
	instruction_t instruction[] = {
		{"push", fpush},
		{NULL, NULL}
	};

	// create while loop to iterate the instruction array
	while (instruction[index].opcode != NULL)
	{
		if (strcmp(instruction.opcode[index], command) == 0)
		{
			instruction[index].f(&top, line_number);
			break;
		}
		index++;
	}
}
