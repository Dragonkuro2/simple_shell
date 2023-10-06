#include "main.h"

/**
 * _atoi - this function turn the charchters to integrs
 * @s: this input carachter
 * Return: it return the integrs
 */
int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = num * 10 + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);
	return (num * sign);
}

/**
 * _strlen - it like the function strline
 * @s: the input charchter
 * Return: it retuen the number output of the function
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;
	return (i);
}


/**
 * _puts - this function is similar to the function puts
 * @str: the input string
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
