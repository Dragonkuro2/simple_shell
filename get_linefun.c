#include "main.h"
/**
 * get_linefun - reads the line
 *
 * Return: returns the line
 */
char *get_linefunc(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t n;

	write(STDOUT_FILENO, "$ ",  2);
	n = getline(&line, &len, stdin);

	if (n == -1)
	{
		return (NULL);
	}

	return (line);
}
