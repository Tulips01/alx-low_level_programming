#include "main.h"

/**
 *  _islower - checks for lowercase character
 *  @c: the character to be checked
 *  Returns 1 if c is lowercase,otherwise 0
 *  Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
	return (0);
}

