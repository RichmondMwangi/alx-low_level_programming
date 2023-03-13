#include "main.h"
#include <stdlib.h>
/**
  *_strdup - returns a pointer to a newly alloctaed
  *space in memory which contains a copy of the string
  *passed.
  *@str: pointer to string being duplicated.*
  *Return: NULL if str is NULL.
  *pointer to duplicated string on success.
  *NULL if memory was insufficient.
*/
char *_strdup(char *str)
{
	char *c;
	unsigned int n, i;

	/* check is str is null */
	if (str == NULL)
	{
		return (NULL);
	}

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}

	c = malloc(sizeof(char) * (n + 1));

	/*check if malloc was successful*/
	if (c == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < n; i++)
	{
		c[i] = str[i];
	}
	c[n] = '\0';
	return (c);

}
