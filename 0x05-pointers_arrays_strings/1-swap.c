#include "main.h"
/**
 * swap_int - swap two integers
 * @a: value 1
 * @b: value 2
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
int h;

h = *a;
*a = *b;
*b = h;
}
