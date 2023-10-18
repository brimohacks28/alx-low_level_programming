#include "main.h"
/**
 * leet - transform to leet
 * @s: char  array string type
 * Return: s transformed.
 */

char *leet(char *s)
{
	int j, jj;
	char s1[] = "aeotl";
	char S1[] = "AEOTL";
	char s2[] = "43071";

	for (j = 0; s[j] != '\0'; j++)
	{
		for (jj = 0; jj < 5; jj++)
		{
			if (s[j] == s1[jj] || s[j] == S1[jj])
			{
				s[j] = s2[jj];
				break;
			}
		}
	}
	return (s);
}
