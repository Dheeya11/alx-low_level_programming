#include <stdio.h>

/**
* main -
* prints
* Return: always return a 0 (Success)
*/

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; --c)
		putchar(c);

	putchar('\n');

	return (0);
}

