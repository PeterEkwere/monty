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
	int line_num = 1;

	ptr = malloc(sizeof(int));

	file = fopen(argv[1], "r");
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file <%s>\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	if (file_function(argc, file, line_num) == 0)
	{
		fclose(file);
	}
	free(ptr);
	free_stack(top);
	return (0);
}
