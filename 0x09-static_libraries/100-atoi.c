#include "main.h"
/**
 * _atoi - converts a string to integer
 * @s: char type string
 * Return: integer converted
 */
int _atoi(char *s)
{
	int a;
	int rep = 0;
	int b = -1;
	int num = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == '-')
			b = b * -1;
		if (s[a] >= '0' && s[a] <= '9')
		{
			rep = rep * 10;
			rep -= (s[a] - '0');
			num = 1;
		}
		else if (num == 1)
			break;
		}
		rep = b * rep;
		return (rep);
}
