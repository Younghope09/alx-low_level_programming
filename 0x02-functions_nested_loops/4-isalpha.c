#include "main.h"

/**
 * _isalpha - this is a program to print out alphabets
 * @c: characters
 * Return: 1 if c is a letter, lowercase or uppercase, or 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
		return (1);
	else
		return (0);
}
