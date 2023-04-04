#include "main.h"

/**
 * _memcpy - func copies @n bytes from memory are @src to memory area @dest
 * @n: func copies
 * @src: bytes from memory area
 * @dest: pointer to the destination memory
 *
 * Return: pointer to the dest memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
		*(dest + i) = *(src + i);
	return (dest);
}
