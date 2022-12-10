#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: print the alphabet in lower case\n
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
