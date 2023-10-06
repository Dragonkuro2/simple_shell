#include "main.h"
/**
 * **splitter - splits the line according to the delemitrs
 * @line : string to split
 * Return: the splited string
 */
char **splitter2(char *line)
{
	char *split, **splits = NULL;
	int counter = 0, i = 0;

	if (line == NULL)
		return (NULL);

	split = strtok(line, " \t\n");
	while (split)
	{
		counter++;
		splits = realloc(splits, counter * sizeof(char *));
		if (!splits)
		{
			for (; i < counter - 1; i++)
				free(splits[i]);
			free(splits);
			return (NULL);
		}
		splits[counter - 1] = strdup(split);
		if (!splits[counter - 1])
		{
			for (i = 0; i < counter - 1; i++)
				free(splits[i]);
			free(splits);
			return (NULL);
		}
		split = strtok(NULL, " \n\t");
	}
	return (splits);
}
