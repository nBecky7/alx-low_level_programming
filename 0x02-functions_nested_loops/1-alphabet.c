#include "main.h"

/**
 * print_alphabet - Check description
 * Description: prints the alphabet in lowercase followe by a new line
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');

	return (0);
}
