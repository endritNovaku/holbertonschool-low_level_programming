#include "main.h"
/**
 * times_table - times table
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j == 0)
			{
				_putchar((i * j) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if ((i * j) <= 9 && j != 9)
			{
				_putchar(' ');
				_putchar((i * j) + '0');
				_puthar(',');
				_putchar(' ');
			}
			else if ((i * j) >= 9 && j != 9)
			{
				_putchar((i * j) / 10 + '0');
				_putchar((i * j) % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if ((i * j) <= 9 && j == 9)
			{
				_putchar(' ');
				_putchar((i * j) + '0');
			}
			else
			{
				_putchar((i * j) / 10 + '0');
				_putchar((i * j) % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
