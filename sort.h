#ifndef SORT_H
#define SORT_H
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void swap_node(listint_t *node1, listint_t *node2, listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void Swap(int *arr, int a, int b);
void qsorter(int *arr, int f_index, int l_index, size_t size);
int partition(int *arr, int f_index, int l_index, size_t size);

#endif
