#include "main.h"
/**
 * _strstr - function locate
 * @haystack: pointer to char
 * @needle: pointer to char
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *result = haystack, *pneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (result);
		}
		needle = pneedle;
		result++;
		haystack = result;
	}
	return (0);
}
