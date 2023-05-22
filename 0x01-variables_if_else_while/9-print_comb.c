#include <stdio.h>

/**
* main - Writing a program that prints all possible
* combinations of single-digit numbers.
* prints all possible combinations of single-digit numbers
* Return: always return 0 (Success)
*/

int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{	
		putchar(digit);
		if (digit != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
