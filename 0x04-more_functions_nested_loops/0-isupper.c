#include "main.h"

/**
* _isupper - checking for uppercase character.
* @c: an input character
* Return: 0 (success)
*/

int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}
	return (isupper);
}
