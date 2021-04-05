#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
/**
 * main - function that builds a linked list of the PATH directories.
 * Return: 0
 */
struct node
{
	int data;
	struct node *link;
	};
int main(void)
{
/* char **array = NULL; */
	char *path = NULL;
	char *tok;
	int i;
	struct node *head, *current;

	path = getenv("PATH");
/* printf("%s\n", path); */
	tok = strtok(path, ":");

	head = malloc(sizeof(struct node));
	head->data = *tok;
	head->link = NULL;

	for (i = 0; tok != NULL; i++)
	{
		current = malloc(sizeof(struct node));
		current->data = *tok;
		current->link = head;
		printf("%s\n", path);
		tok = strtok(NULL, ":");
	}
	tok = NULL;
	return (0);
}
