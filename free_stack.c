#include "monty.h"
/**
 * free_stack - Frees Doubly Linked Lists.
 * @head: Stack HEAD.
 */
void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
