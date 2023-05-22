#include <stdio.h>
/**
* main - writing uppercase and lowercase alphabets using putchar
* prints both uppercase and lowercase alphabets
* Return: always return 0 (Success)
*/

int main(void)
{
	/* for lowercase alphabet */
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);


	/* for uppercase alpabet */

	for (c = 'A'; c <= 'Z'; ++c)
		putchar(c);

	putchar('\n');


	return (0);
}
