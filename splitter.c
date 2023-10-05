#include "main.h"
/**
 * **splitter - splits the line according to the delemitrs
 * @line : string to split
 * Return: the splited string
 */
char **splitter(char *line)
{
	char *split = NULL, *copy = NULL;
	char **cmd = NULL;
	int counter = 0, i = 0;

	if (!line)
		return (NULL);
	copy = strdup(line);
	split = strtok(copy, " \t");

	if (split == NULL)
	{
		free(copy);
		free(line);
		return (NULL);
	}

	while (split)
	{
		counter++;
		split = strtok(NULL, " \t");
	}
	free(copy);

	cmd = malloc(sizeof(char *) * (counter + 1));

	split = strtok(line, " \t");
	while (split)
	{
		cmd[i] = strdup(split);
		split = strtok(NULL, " \t");
		i++;
	}
	free(line);
	cmd[i] = NULL;

	return (cmd);

}
