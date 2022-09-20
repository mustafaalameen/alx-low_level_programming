#include "main.h"

/**
 * _strlen - Returns the length of the string
 * @s: pointer to a string
 *
 * Return: it returns the length of a string
 */

int _strlen(char *s)
{
	int count;

	count = 1;

	while (*s != '\0')
	{
		count++;
	}

	return (count);
