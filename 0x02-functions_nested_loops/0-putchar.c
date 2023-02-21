#include "main.h"
/**
 * main - entry point
 * description: a program that prints _putchar, followed by a new line
 * Return: 0 (success)
*/
int main(void)
{
	char *sh = "main";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
