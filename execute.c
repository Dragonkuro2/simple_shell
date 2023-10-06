#include "main.h"
/**
 * _execute - executes the commands
 * @cmd: the splitted string
 * @argv: array of string
 * Return: return value
 */
int _execute(char **cmd, char **argv)
{
	pid_t child;
	int status;

	child = fork();

	if (child == 0)
	{
		if (execve(cmd[0], cmd, environ) == -1)
		{
			perror(argv[0]);
			freearrays(cmd);
		}
	}
	else
	{
		waitpid(child, &status, 0);
		freearrays(cmd);
	}
	return (WEXITSTATUS(status));
}
