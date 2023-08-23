#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @n: pointer
 * Return: pointer to upper case string
 */

char *string_toupper(char *n)
{
int length_of_string;

length_of_string = 0;
while (n[length_of_string] != '\0')
{
if (n[length_of_string] >= 97 && n[length_of_string] <= 122)
{
n[length_of_string] = n[length_of_string] - 32;
}
length_of_string++;
}
return (n);
}
