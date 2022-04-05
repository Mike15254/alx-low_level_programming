#include "main.h"
#include <stdlib.h>
/**
 * creat_array ,and initialize it with specific char
 * returns NULL if sze = 0
 * Returns a pointer th the array ,or NULL if it fails
 **/
char *creat_array(unsigned int size, char c)
{
	char *cr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	cr = malloc(sizeof(c) * size);

	if (cr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		cr[i] = c;

	return (cr);

}

