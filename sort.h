#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


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

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void swapn(listint_t *a, listint_t *b);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void swap(int *array, ssize_t item1, ssize_t item2);
int lomuto_partition(int *array, ssize_t first, ssize_t last, size_t size);
void qs(int *array, ssize_t first, ssize_t last, int size);







#endif
