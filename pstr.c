#include "monty.h"
/**
 * f_pstr - Prints String Starting 4rm Top of Stack followed by new
 * @head: Stack Head.
 * @counter: line_number
 * Return: No return.
 */
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
