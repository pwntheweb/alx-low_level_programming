#include "main.h"
/**
 * print_last_digit - main function
 * @n: the number to be evaluated
 *
 * Return: alwyas 0
 *
 */

int print_last_digit(int n)
{
	int lastDigit = n % 10;

	_putchar('0' + lastDigit);
	return (0);
}
