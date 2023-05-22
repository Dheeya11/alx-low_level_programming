#include <stdio.h>
/**
* main - Writing a program that prints the alphabet in lowercase
* prints Print all the letters except q and e
* Return: always prints 0 (Success)
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' || c != 'e')
		{
			putchar(c);
		}
		c++;
	}

	putchar('\n');

	return (0);
}
