#include "main.h"
/**
 * set_bit - sets thye value of a bit at a given index to 1
 * @n: a pointer to the bit
 * @index: the index to to set the value at - indices starts at 0
 * Return: if a error occurs = -1, otherwise = 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n ^= (1 << index);
	return (1);
}
