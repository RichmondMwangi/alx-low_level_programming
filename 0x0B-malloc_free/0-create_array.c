#include <stdlib.h>
#include "main.h"
/**
 * create_array - main entry
 * @size: size input
 * @c: char
 * Return: 0
*/
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	a = malloc(sizeof(char) * size);

	if (size == 0 || a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}
