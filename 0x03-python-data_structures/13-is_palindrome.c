#include <stddef.h>
#include "lists.h"
size_t get_list_num(const listint_t *h);

/**
 * is_palindrome - checks if a singly linked list is a palindrome.
 * @head: double pointer to the head node
 * Return: 1 if True 0 is false
 */
int is_palindrome(listint_t **head)
{
	 int length = get_list_num(*head);
	int store_half[length];
	int i = 0;
	listint_t *h;

	if (*head == NULL)
		return 1;

	if (length%2 != 0)
		return 0;

	length = (length / 2) - 1;
	while (h)
	{
		if (i <= length)
			store_half[i] = h->n;
		else if (store_half[length--] != h->n)
			return 0;
		h = h->next;
	}
	return 1;   
}

/**
 * get_list_num - gets the number of all elements of a listint_t list
 * @h: pointer to head of list
 * Return: number of nodes
 */
size_t get_list_num(const listint_t *h)
{
	const listint_t *current;
	unsigned int n; /* number of nodes */

	current = h;
	n = 0;
	while (current != NULL)
	{
		current = current->next;
		n++;
	}

	return (n);
}
