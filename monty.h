#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct interpreter_data - Interpreter data
 * @current_line: Current execution line
 * @file_name: The executing file name
 * @line: The current line in execution
 * @opcode: Opcode of the current command
 * @arg: Opcode arg
 * @stack: Head of the stack
 * @file: The file read from
 */
typedef struct interpreter_data
{
	unsigned int c_line;
	char *file_n;
	char *line;
	char *opcode;
	char *arg;
	stack_t *stack;
	FILE *filePtr;
} i_data;
extern i_data data;
void exec_cmd(void);
void op_pall(stack_t **stack, unsigned int line_number);
void op_push(stack_t **stack, unsigned int line_number);
int is_digit(char *n);
void print_op_error(char *str, int l_num);
stack_t *get_top(stack_t **s);
void print_err(void);
void free_stack(void);
void op_pint(stack_t **stack, unsigned int line_number);
void op_pop(stack_t **stack, unsigned int line_number);
void op_swap(stack_t **stack, unsigned int line_number);

#endif
