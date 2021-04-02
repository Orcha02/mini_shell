#include <stdio.h>
#include <stdlib.h>
#include "headers.h"
/**
 * read_line - program that prints "$ ", wait for the user to enter a command,
 * prints it on the next line.
 * Return: 0
 */
int read_line(void)
{
	char *line;
	size_t l_len = 0;
	int value_return;

	printf("$ ");
	value_return = getline(&line, &l_len, stdin);
	if (value_return == -1)
	{
		return (-1);
	}
	printf("%s", line);
	return (value_return);
}
