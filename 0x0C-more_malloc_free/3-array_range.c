#include "main.h"
/**
 * *array_range - function that creates an array of integers.
 * @min: mininum value
 * @max: maximum value
 * Return: int pointer to the allocate memory
 */
int *array_range(int min, int max)
{
int i, j;
int *a;

if (min > max)
return (NULL);
j = max - min + 1;
a = malloc(sizeof(int) * j);
if (a == NULL)
return (NULL);
for (i = 0; i < j; i++)
{
a[i] = min;
min++;
}
return (a);
}
