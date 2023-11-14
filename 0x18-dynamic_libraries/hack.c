#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int printf(const char *format, ...)
{
	write(1, "9 8 10 24 75 +9\n", 75);
	write(1, "Congratulations, you win the JAckpot!\n", 38);
	exit(EXIT_SUCCESS);
}
