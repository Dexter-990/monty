#include "monty.h"

/**
 * print_op_error - prints error message for an opcode
 * @str: error message
 * @l_num: line number
 */

void print_op_error(char *str, int l_num)
{
	fprintf(stderr, "L%d: %s\n", l_num, str);
	fclose(data.filePtr);
	free_stack();
	exit(EXIT_FAILURE);
}

/**
 * print_err - pprints error
 */

void print_err(void)
{
	fprintf(stderr, "L%d: unknown instruction %s\n", data.c_line, data.opcode);
	fclose(data.filePtr);
	free_stack();
	exit(EXIT_FAILURE);
}
