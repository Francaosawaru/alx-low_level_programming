#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 *
 * Return: o when successful
 */
int main(void)
{
printf("Size of a char: %d byt(s)\n", sizeof(char));
printf("Size of an int: %d byte(s)\n", sizeof(int));
printf("Size of a long int: %d byte(s)\n", sizeof(long int));
printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
printf("Size of a float: %d byte(s)\n", sizeof(float));
return (0);
}
