#include "monty.h"
/**
 * f_pall - Prints Stack.
 * @head: Stack Head
 * @counter: Not Used If No Invalid statements.
 * Return: No return
 */
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
