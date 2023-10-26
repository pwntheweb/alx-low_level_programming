#include "main.h"
/**
 * clear_bit - Clear the value of a bit
 * @n: A pointer to the unsigned long int
 * @index: the index of the bit to clear to 0
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n = *n & ~(1UL << index);
	return (1);
}
