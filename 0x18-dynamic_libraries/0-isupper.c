#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * Return: 1 on sucess 0 on failure
 * @c: parameter to be check
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
