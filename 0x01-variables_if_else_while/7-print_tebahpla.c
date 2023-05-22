#include <stdio.h>

/**
* main - printing lowercase alphabet in reverse
* prints lowercase alphabet in reverse
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

