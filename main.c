#include "monty.h"
/**
 * main - this is the point of entry
 * @argc: this is the argument count
 * @argv: this is an array of pointers to characters
 * Return:0
 */
int main(int argc, char **argv)
{
	FILE *file;
	char line[MAX_LENGTH];
	char command[MAX_LENGTH];
	int argument;
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
		// Remove the trailing newline character//
		line[strcspn(line, "\n")] = '\0';

		//check if line is empty
		if (strcmp(line, "") == 0)
			continue;

		// Parse line
		sscanf(line, "%s %d", command, &argument);

		// call function_handler
		handle_command(command, argument, line_number);

		// increment line number by 1
		line_number += 1;
	}
	fclose(file);
	return (0);
}
