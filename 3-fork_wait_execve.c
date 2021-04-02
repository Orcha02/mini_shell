#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
/**
 * main - program that executes the command ls -l /tmp in 5 different child processes
 * Return: 0
 */
int main(void)
{
        int i;
        char *argv[] = {"ls", "-l", "/tmp", NULL};
        for(i = 0 ; i < 5; i++) /*loop will run n times (n=5)*/
        {
		/* if (fork() == -1) */
		/* { */
		/* 	perror("Error"); */
		/* 	return (1); */
		/* } */
                if (fork() == 0)
                {
			execve(argv[0], argv, NULL);
			printf("[son] pid %d from [parent] pid %d\n",getpid(),getppid()); 
			exit(0);
                }
        }
        for (i = 0 ; i < 5 ; i++) /* loop will run n times (n=5)*/
                wait(NULL);
        return (0);
}
