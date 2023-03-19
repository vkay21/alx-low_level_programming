#include <stdio.h>

/**
 * main - func prints out all outcomes when you combine 3 nnumbers
 *
 * Return: 0 (success)
 */
int main(void)
{
	int num1, num2, num3;

	num1 = 48;
	while (num1 <= 55)
	{
		num2 = num1 + 1;
		while (num2 <= 56)
		{
			num3 = num2 + 1;
			while (num3 <= 57)
			{
				putchar((char)num1);
				putchar((char)num2);
				putchar((char)num3);
				if (num1 != 55)
				{
					putchar(',');
					putchar(' ');
				}
				num3++;
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
