#include "main.h"
/**
 * *rot13 - encodes a string using rot13
 * @s: int type array pointer
 * Return: encoded
 */

char *rot13(char *s)
{
	int j, jj;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (j = 0; s[j] != '\0'; j++)
	{
		for (jj = 0; jj < 54; jj++)
		{
			if (((s[j] <= 'z' && s[j] >= 'a') || (s[j] <= 'Z' && s[j] >= 'A'))
			&& s[j] == input[jj])
		{
			s[j] = output[jj];
			break;
		}
	}
	return (s);
	}

}
