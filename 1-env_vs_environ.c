#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[], char **env)
{
        extern char **environ;
        printf("address environ %p\n",&(*environ));
        printf("address env %p\n",&(*env));
}
