#include "main.h"

/**
 * _strcmp - Compares s1 and s2
 *
 * @s1: String to be compared against s2
 * @s2: String to be compared against s1
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
