#include "main.h"
/**
 * more_numbers - print more numbers
 */
void more_numbers(void)
{
	int x;
	int c;
	for (c = 1; c <= 10; c++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x >= 10)
			{
				_putchar('1');
			}
			_putchar(x % 10 + '0');
		}
		_putchar('\n');
	}
}
