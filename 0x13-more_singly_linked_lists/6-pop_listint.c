#include "lists.h"

/**
 *pop_listint - deletes the head node of a linked list
 *@head: head of the list
 *
 *Return: the deleted node data
 */
int pop_listint(listint_t **head)
{
listint_t *tmp;
int ret;

if (*head == NULL)
	return (0);
tmp = *head;
ret = (*head)->n;
*head = (*head)->next;
free(tmp);
return (ret);
}
