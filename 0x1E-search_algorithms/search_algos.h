#ifndef __SEARCH_ALGOS_H
#define __SEARCH_ALGOS_H

#include <stdlib.h>
#include <stdio.h>


/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

int linear_search(int *array, size_t size, int value);
void print_number(int num);
void print_comparison(size_t index, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, size_t left, size_t right);
void _puts(char *str);
int jump_search(int *array, size_t size, int value);
void print_found(size_t prev_jump, size_t curr_jump);
void print_state(size_t index, int value);
int interpolation_search(int *array, size_t size, int value);
void print_out_of_bound(size_t pos);
size_t estimate_pos(int *array, size_t high, size_t low, int value);
int exponential_search(int *array, size_t size, int value);
int _binary_search(int *array, int value, size_t l_bound, size_t u_bound);
int recursive_binary(int *array, size_t left, size_t right, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);

#endif
