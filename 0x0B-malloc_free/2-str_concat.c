#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *str_concat - concatenate tow str
 * @s1: first str
 * @s2: second str
 * Return: NULL or ptr
 * Written by: Abdelhadi Bensaber
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1 = 0, len2 = 0, i, j;
	char *concatenated;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	concatenated = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (concatenated == NULL)
	{
		return (NULL);
	}
