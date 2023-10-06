#include "main.h"

/**
 * _memcpy -  this function is similar to the function memcpy
 * @dest: the destination array
 * @src: te sorce file
 * @n: the number of time we want to copy
 * Return: it return the new value of dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	size_t i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

/**
 * _memset - this function is semailar to the function memset
 * @s: A pointer to the start of the memory block you want to fill.
 * @b: The value you want to set in each byte of the memory block.
 * @n: The number of bytes to be set.
 * Return: it return the new value of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	size_t i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * _strchr - this function is the same strchr function
 * @s: the input pointer
 * @c: the carachter that we are looking for
 * Return: itreturn NULL or the rest of the pointer s
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}

/**
 * _strspn - this function is the same of the function strsnp
 * @s: the original text
 * @accept: the text that we'll use for checking
 * Return: it return the new value of s
 */

unsigned int _strspn(char *s, char *accept)
{
	size_t i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}

/**
 * _strstr - this function and the strstr function are the same
 * @haystack: the haystack
 * @needle: the needle
 * Return: it depands on the input
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0' && haystack[i + j] == needle[j]; j++)
			;
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return (NULL);
}
