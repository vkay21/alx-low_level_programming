#include "main.h"

/**
 * main - func prints alphabet in lower case
 *
 * Return: Always 0.
*/
void print_alphabet(void)
{
	char n; /*declare a variable (n) to store the alphabets*/

	for (n = 'a'; n <= 'z'; ++n) /*loops through the var */
		_putchar(n);
	_putchar('\n');
}
