#include "monty.h"
/**
 * exec_cmd - Executes the opcode
 * Return: void
 */
void exec_cmd(void)
{
	instruction_t execs[] = {
		{"push", op_push},
		{"pall", op_pall},
		{NULL, NULL}
	};
	int i;

	data.opcode = strtok(data.line, " \n\t");
	if (!data.opcode || data.opcode[0] == '#')
		return;
	data.arg = strtok(NULL, " \n\t");

	/*printf("%s %s\n", data.opcode, data.arg);*/
	for (i = 0; execs[i].opcode; ++i)
	{
		if (strcmp(execs[i].opcode, data.opcode) == 0)
		{
			execs[i].f(&data.stack, data.c_line);
			return;
		}
	}

	print_err();
}
