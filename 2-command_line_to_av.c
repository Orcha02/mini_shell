#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * split_line - function that splits a string and returns
 * an array of each word of the string.
 * @ac: Argument count
 * @av: Argument value
 * Return: 0
 */
int main(__attribute__((unused))int ac, __attribute__((unused))char **av)
{
	char *line;
	size_t l_len = 0;
	char *tok;
	char **array = NULL;
	int i, count_tok = 0;
	char separator[] = {" "};

	getline(&line, &l_len, stdin);
        
	for (i = 0; line[i] != '\0'; i++)
	{
		if (line[i] == separator[0])
			count_tok++;
	}

	array = malloc(sizeof(char *) * (count_tok + 1));
        
	tok = strtok(line, " ");
	for (i = 0; tok != NULL; i++)
        {
		printf("%s", tok);
                tok = strtok(NULL, " ");
                array[0] = tok;
                if (array[0] == NULL)
                        break;
                printf("\n");
        }
        return (0);
}
