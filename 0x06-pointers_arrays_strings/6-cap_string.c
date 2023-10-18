#include "main.h"
/**
 * *cap_string - word Captilization
 * @str: pointer
 * Return: capitilized string sucess.
 */
char *cap_string(char *str)
{
	char *cap_string(char *str)
	int flag, i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		flag = 0;

		if (i == 0)
		{
			flag = 1;
		}
		else
		{
			for (j = 0; sep[j] != '\0'; j++)
			{
				if (str[i - 1] == sep[j])
				{
					flag = 1;
					break;
				}
			}
		}
		if (flag == 1)
		{
			if (str[i] <= 'z' && str[i] >= 'a')
			{
				str[i] -= ('a' - 'A');
			}
		}
	}
	return (str);
}
