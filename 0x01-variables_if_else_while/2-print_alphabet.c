#include <stdio.h>

/**
* main - writing an alphabet program using putchar
* prints the alphabet in lowercase
* Return: Always return 0 (Success)
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);

	putchar('\n');

	return (0);
}
