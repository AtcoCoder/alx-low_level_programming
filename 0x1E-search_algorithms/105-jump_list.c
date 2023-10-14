#include <stdio.h>
#include <math.h>
#include "search_algos.h"


/**
 * jump_list - Searches for a value in a sorted list of integers using the
 * Jump search algorithm.
 *
 * @list: A pointer to the head of the list to search in
 * @size: The number nodes in list
 * @value: The value to search for
 *
 * Return: A pointer to the first node where value is located, if value is not
 * present in head or if head is NULL, your funcion must return NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t index, step, step_size;
	listint_t *node;

	if (list == NULL || size == 0)
	{
		return (NULL);
	}

	step_size = sqrt(size);
	step = 0;
	index = 0;


	do {
		node = list;
		step++;
		index = step * step_size;

		while (list->next && list->index < index)
		{
			list = list->next;
		}
		if (list->next == NULL && index != list->index)
			index = list->index;
		print_state(index, list->n);
	} while (index < size && list->next && list->n < value);

	print_found(node->index, list->index);

	for (; node && node->index <= list->index; node = node->next)
	{
		print_state(node->index, node->n);
		if (node->n == value)
			return (node);
	}

	return (NULL);
}

/**
 * print_state - prints the current value and it's value
 *
 * @index: current index
 * @value: the value of the current index
 *
 * Return: Nothing.
 */
void print_state(size_t index, int value)
{
	printf("Value checked array[%lu] = [%d]\n", index, value);
}

/**
 * print_found - Prints range between which search value is found
 *
 * @prev_jump: lower range
 * @curr_jump: upper range or bound
 *
 * Return: Nothing.
 */
void print_found(size_t prev_jump, size_t curr_jump)
{
	printf("Value found between indexes [%lu] and [%lu]\n", prev_jump, curr_jump);
}
