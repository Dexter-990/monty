#include "monty.h"

/**
 * op_push - pushes an element to the stack
 * @stack: head pointer of the stack
 * @line_number: line number being executed
 */

void op_push(stack_t **stack, unsigned int line_number)
{
	stack_t *new, *top;

	if (!data.arg || !is_digit(data.arg))
	{
		print_op_error("usage: push integer", line_number);
		exit(EXIT_FAILURE);
	}
	top = get_top(stack);

	new = malloc(sizeof(new));
	if (!new)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = atoi(data.arg);
	new->prev = NULL;
	new->next = NULL;

	if (!top)
	{
		*stack = new;
	}
	else
	{
		new->prev = top;
		top->next = new;
	}
}

/**
 * op_pall - prints all elements in a stack
 * @stack: head pointer
 * @line_number: line_number
 */

void op_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *top = get_top(stack);

	(void) line_number;
	while (top)
	{
		fprintf(stdout, "%d\n", top->n);
		top = top->prev;
	}
}