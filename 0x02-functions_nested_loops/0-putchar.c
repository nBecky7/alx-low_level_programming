#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0.
 */
int main(void)
{
	char word[4] = "Main";
	int i;

	for (i = 0; i < 4; i++)
		_putchar(word[i]);
	_putchar('\n');

	return (0);
}
