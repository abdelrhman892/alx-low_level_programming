#include "main.h"

/**
 * _strncpy - A function that copios a string
 *
 * @dest: pointer to destnation input buffer
 * @src: pointer to source input buffer
 * @n: types of @src
 *
 * Return: @dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n &&  src[i] != '\0' ; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
