#include "Main.h"

/**
 * *_strcat - Function that concatenates two strings.
 *
 * @*dest: input
 * @*src: input
 *
 * Return: pointer to the resulting string.
 *
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	for (j = 0; dest[j] != '\0'; j++)
		;
	while (src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;
	}
	return (dest);
}
