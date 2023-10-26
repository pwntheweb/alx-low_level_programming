#include "main.h"
/**
 * print_binary - Print the binary
 * @n: The unsigned long int.
 */
void print_bianry(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}