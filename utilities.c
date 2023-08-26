#include "monty.h"

/*
 * is_digit - checks if an input is an int
 * @n: input
 * Return: 1 for true 0 for false
 */

int is_digit(char *n)
{
	int i;

	for (i = 0; n[i]; i++)
	{
		if (n[i] < 48 || n[i] > 57)
			return (0);
	}
	return (1);
}

/**
 * get_top - gets top of the stack
 * @s: first element
 * Return: top
 */

stack_t *get_top(stack_t **s)
{
	stack_t *ptr =  *s;

	if (!s || !*s)
		return (NULL);
	while (ptr->next)
		ptr = ptr->next;
	return (ptr);
}
/**
 * free_stack - frees stack
 */

void free_stack(void)
{
	stack_t *ptr = data.stack, *temp;

	while (ptr)
	{
		temp = ptr;
		free(temp);
		ptr = ptr->next;
	}
}
