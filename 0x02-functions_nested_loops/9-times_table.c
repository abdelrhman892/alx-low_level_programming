#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Exmple table
 * 0,0,0,0, ..
 * 0,1,2,3, ..
 *
*/

void times_table(void)
{
	int num, mult, pord;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);
		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			pord = num * mult;


			if (pord <= 9)
				_putchar(' ');
			else
				_putchar((pord / 10) + 48);

			_putchar((pord % 10) + 48);

		}
		_putchar('\n');
	}
}
