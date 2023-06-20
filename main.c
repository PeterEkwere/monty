#include "monty.h"
/**
 * main - this is the point of entry
 * @argc: this is the argument count
 * @argv: this is an array of pointers to characters
 * Return:0
 */
/** GLOBAL VARIABLE **/

int argument;
instruction_t instruction[];
char line[MAX_LENGTH];
char command[MAX_LENGTH];
int value;

int main(int argc, char **argv)
{
	FILE *file;
	char line[MAX_LENGTH];
        char command[MAX_LENGTH];
	int line_number = 1;

	file = fopen(argv[1], "r");
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file <file>\n");
		exit(EXIT_FAILURE);
	}

	while(fgets(line, sizeof(line), file))
	{
		argument = 0;

		line[strcspn(line, "\n")] = '\0';

		if (strcmp(line, "") == 0)
			continue;

		sscanf(line, "%s %d", command, &argument);

		handle_command(command, argument, line_number);

		line_number += 1;
	}
	fclose(file);
	return (0);
}
