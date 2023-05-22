#include <stdio.h>

/**
* main - writing all possible combinations of two two-digit numbers
* prints all possible combinations of two two-digit numbers.
* Return: always return 0 (Success)
*/

int main(void)
{

	int num1, num2;

	for (num1 = 0; num1 < 100; num1++)

		for (num2 = num1; num2 < 100; num2++)

			if (num1 != num2)

				if (num1 < num2)

					printf("%02d %02d", num1, num2);
				else
					printf("%02d %02d", num2, num1);

			if (num1 != 98 || num2 != 99)

				printf(", ");

		printf("\n");
		return (0);
}
