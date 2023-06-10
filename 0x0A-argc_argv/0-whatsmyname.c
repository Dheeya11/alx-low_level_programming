#include <stdio.h>
#include <string.h>

/**
* main - write a program that prints it's name
* @argv - argument vector
* @argc - argument count
* Return: 0 (always)
*/

int main(int argc, char *argv[])
{
	const char *program_name = argv[0];

	const char  *last_path_separator = strrchr(program_name, '/');

	if (last_path_separator != NULL)
	{
		program_name = last_path_separator + 1;
	}

	printf("%s\n", program_name);

	return (0);
}
