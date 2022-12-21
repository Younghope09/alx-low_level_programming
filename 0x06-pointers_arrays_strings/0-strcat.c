#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * Description: Write a function that concatenates two strings.
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
