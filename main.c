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
	int line_number = 1;
	char *token;

	ptr = malloc(sizeof(int));

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
	while (fgets(line, sizeof(line), file))
	{
		*ptr = 0;

		line[strcspn(line, "\n")] = '\0';

		if (strcmp(line, "") == 0)
			continue;
		token = strtok(line, " ");
		if (token != NULL)
		{
			strcpy(command, token);
			token = strtok(NULL, " ");
			if (token != NULL)
			{
				*ptr = atoi(token);
			}
		}
		handle_command(command, line_number);
		line_number += 1;
	}
	fclose(file);
	return (0);
}
