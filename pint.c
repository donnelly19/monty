#include "monty.h"
/**
 * pint_s - prints top value of the stack
 * @stack: double pointer to the stack
 * @line_number: current line of bytecodes
 * Return: value
 */
void pint_s(stack_t **stack, unisigned int line_number)
{
	stack_t *temp = *stack;

	if(!temp)
	{
		p_errors(1, line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", temp->element);
}
