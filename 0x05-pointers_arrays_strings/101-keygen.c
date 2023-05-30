#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates keygen.
 * Return: 0 Always.
 */

int main(void)
{
	int r = 0, c = 0;
	time_t t;

	/* Seed the random number generator */
	srand((unsigned int)time(&t));

	/* Generate characters until the total count reaches 2772 */
	while (c < 2772)
	{
		r = rand() % 94 + 33; /* Generate a random number between 33 and>
		if ((c + r) > 2772)
			break;
		c = c + r;
		printf("%c", r); /* Print the generated character */
	}

	/* Print the remaining difference to reach 2772 */
	printf("%c\n", (2772 - c));

	return (0);
}
