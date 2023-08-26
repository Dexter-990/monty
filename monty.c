#include "monty.h"

/**
 * main - starts the program
 * @argc: argument count
 * @argv: argument vectors
 * Return: 0 always
 */

i_data data = {0, NULL, NULL, NULL, NULL, NULL, NULL};
int main(int argc, char **argv)
{
	char buf[100];

	data.file_n = argv[1];

	if (argc == 1 || argc > 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	data.filePtr = fopen(data.file_n, "r");
	if (!data.filePtr)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (fgets(buf, sizeof(buf), data.filePtr))
	{
		data.c_line++;
		data.line = buf;
		exec_cmd();
	}
	fclose(data.filePtr);

	return (0);
}
