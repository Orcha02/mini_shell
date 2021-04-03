#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
/**
 * main - function that prints each directory contained
 * in the the environment variable PATH
 * Return: One directory per line
 */
int main(void)
{
	char *path;
	char *tok;
	int i;

	path = getenv("PATH");
	tok = strtok(path, "/");
	for (i = 0; tok != NULL; i++)
	{
		printf("/%s\n", tok);
		tok = strtok(NULL, "/");
	}
	tok = NULL;
	return (0);
}
