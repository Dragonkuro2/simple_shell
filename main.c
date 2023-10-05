#include "main.h"
/**
 * main - Entry to simple shell project main func
 * @argc: counter
 * Return: 0 Alaways (success)
 */
int main(int argc, char **argv)
{
	char *line = NULL; /* **cmd = NULL;*/
	(void) argv;
	(void) argc;

	while (1)
	{
		line = get_linefunc();
		if (line == NULL)
		{
			write(STDOUT_FILENO, "\n", 1);
			return (0);
		}
		printf("%s", line);

		/*cmd = splitter(line);*/
	}
}
