#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - Entry point
 * @head: argument to free_dlistint_t
 *
 * Description: set the head of a linked list to null
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp, *tp;
temp = head;
while (temp != NULL)
{
tp = temp->next;
tp->prev = NULL;
free(temp);
tp = temp;
}

}
