#include "monty.h"
/**
 * file_function - is a function that handles the files
 * @argc: is the argument count
 * @file: is a file pointer
 * @line_number: line_number
 * Return: void
 */
int file_function(int argc, FILE *file, int line_number)
{
	char *token;
	char line[MAX_LENGTH];
	char command[MAX_LENGTH];

	line_num_ptr = &line_number;
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	while (fgets(line, sizeof(line), file))
	{
		*ptr = 0;

		line[strcspn(line, "\n")] = '\0';

		if (strcmp(line, "") == 0)
			continue;
		if (line[0] == '#')
			continue;
		token = strtok(line, " ");
		if (token != NULL)
		{
			strcpy(command, token);
			token = strtok(NULL, " ");
			if (token != NULL)
				*ptr = atoi(token);
		}
		handle_command(command, line_number);
		line_number += 1;
	}
	return (0);
}
