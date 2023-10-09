#include "main.h"
/**
 * _execute2 - executes the command written
 * @cmd: the command to be executed
 * Return: Return value
 */
int _execute2(char **cmd, char **argv, int indx)
{
	pid_t child_pid;
	int status;

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("fork");
		freearrays(cmd);
		exit(EXIT_FAILURE);
	}
	if (child_pid == 0)
	{
		if (execvp(cmd[0], cmd) == -1)
		{
			printerro(argv[0],cmd[0],indx);
			freearrays(cmd);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		if (wait(&status) == -1)
		{
			perror("wait");
			freearrays(cmd);
			exit(EXIT_FAILURE);
		}
	}
	return (status);
}
