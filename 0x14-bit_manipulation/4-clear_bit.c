#include "main.h"
/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: A pointer to the unsigned long int
 * @index: The index, starting from 0 of the bit to set
 *
 * Return: 1 if successful, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1ul << index);
	return (1);
}
