#include "main.h"

/**
 * cap_string - Function that capitalizes all words of a string.
 *
 * @z: input.
 *
 * Return: capitalized words.
 */

char *cap_string(char *z)
{
	int a = 0, i;
	int cps = 13;
	char cp[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (z[a])
	{
		i = 0;

		while (i < cps)
		{
			if ((a == 0 || z[a - 1] == cps[i]) && (z[a] >= 97 && z[a] <= 122))
				z[a] -= 32;

			i++;
		}

		a++;
	}

	return (z);
}
