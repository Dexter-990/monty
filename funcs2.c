#include "monty.h"

/**
 * op_add - adds top two elements
 * @stack: head of stack
 * @line_number: line number
 */

void op_add(stack_t **stack, unsigned int line_number)
{
	stack_t *top;
	int sum;

	(void) line_number;
	top = get_top(stack);
	if (!top || !top->prev)
		print_op_error("can't add, stack too short", data.c_line);

	sum = top->n + top->prev->n;
	op_pop(stack, data.c_line);
	top = get_top(stack);
	top->n = sum;
}

/**
 * op_add - adds top two elements
 * @stack: head of stack
 * @line_number: line number
 */
void op_add(stack_t **stack, unsigned int line_number)
{
}
