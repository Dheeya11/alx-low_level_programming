#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - assigns a random number to var n everytime its excecuted
* prints whether number stored in var n is positive or negative
* Return: Positive, Negative or Zero  (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if( n > 0 ) {
		printf("%d, positive", n);
	} else if( n < 0 ) {
		printf("%d, negative", n);
	} else {
		printf("%d, is zero", n);
	}
	return (0);
}

