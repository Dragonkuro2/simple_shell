#include "main.h"
/**
 * _execute - executes the commands
 * @cmd: the splitted string
 * @argv: array of string
 * Return: return value
 */
int _execute(char **cmd, char **argv, int indx)
{
	pid_t child;
	int status;

	child = fork();
	if (child == 0)
	{
		if (execve(cmd[0], cmd, environ) == -1)
		{
			printerro(argv[0], cmd[0], indx);
			freearrays(cmd);
			exit (0);
		}
	}
	else
	{
		waitpid(child, &status, 0);
		freearrays(cmd);
	}
	return (WEXITSTATUS(status));
}
