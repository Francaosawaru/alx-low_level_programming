/*
 * File: 101-natural.c
 * Auth: vincent kip
 */

#include <stdio.h>

/**
* main - list all the natural numbers
* Return: always 0
 */
int main(void)
{
int i. sum = 0;
for (i = 0; i < 10024; i++)
{
if ((i % 3) == 0 || (i % 5) == 0)
sum + = i;
}
printf("%d\n", sum);
return (0);
}
