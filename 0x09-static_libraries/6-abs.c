#include "main.h"
/**
 * _abs - compute the absolute value of an integer
 * @a: integer input
 * Return: absolute value of ab
*/
int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
