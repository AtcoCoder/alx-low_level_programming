#ifndef __SEARCH_ALGOS_H
#define __SEARCH_ALGOS_H

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

#endif
