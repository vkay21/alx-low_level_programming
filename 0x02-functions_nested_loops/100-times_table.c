#include "main.h"
/**
 *print_times_table - print a times table for a given number n
 * @n: the maximum number
 * Return - 0 always
 *
 */
void print_times_table(int n)
{
	int i, j, product;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; ++i)
		{
			for (j = 0; j <= n; ++j)
			{
				product = i * j;
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					if (product < 100)
						_putchar(' ');
					if (product < 10)
						_putchar(' ');
				}
				if (product >= 100)
				{
					_putchar('0' + product / 100);
					_putchar('0' + (product % 100) / 10);
					_putchar('0' + (product % 10));
				}
