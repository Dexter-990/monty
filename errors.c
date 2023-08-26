#include "monty.h"

/**
 * print_op_error - prints error message for an opcode
 * @str: error message
 * @l_num: line number
 */

void print_op_error(char *str, int l_num)
{
	fprintf(stderr, "L%d: %s\n", l_num, str);
}
