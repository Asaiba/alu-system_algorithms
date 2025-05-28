#include "heap.h"

/**
 * heap_create - Creates a new heap data structure
 * @data_cmp: Pointer to the comparison function for node data
 *
 * Return: A pointer to the newly created heap_t structure,
 *         or NULL if memory allocation fails or if data_cmp is NULL
 */
heap_t *heap_create(int (*data_cmp)(void *, void *))
{
	heap_t *heap;

	if (data_cmp == NULL)
		return (NULL);

	heap = malloc(sizeof(heap_t));
	if (heap == NULL)
		return (NULL);

	heap->size = 0;
	heap->data_cmp = data_cmp;
	heap->root = NULL;

	return (heap);
}
