#include "main.h"
/**
 * print_sign  - check if number is negative or positive
 *
 * @n: integer n is the number variable
 * Return: Returns different outputs according to signs
 */
int print_sign(int n)
{

        if (n > 0)
        {
		_putchar('+');
		return (1);
        }
        else if (n == 0)
        {
		_putchar('0');
		return (0);
        }
        else if (n < 0)
        {
		_putchar(',');
		_putchar(' ');
		_putchar(n +'-');
		_putchar('\n')
		return (-1);
        }
	return (0);

}
