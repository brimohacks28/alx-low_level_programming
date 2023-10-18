#include "main.h"
/**
 * *cap_string - word Captilization
 * @str: pointer
 * Return: capitilized string sucess.
 */
char *cap_string(char *str)
{
	char sep[] = ",\t;n; .!?\"(){}";
	int flag, j, jj;

	for (j = 0; str[j] != '\0'; j++)
	{
		flag = 0;

		if (j == 0)
		{
			flag = 1;
		}
		else
		{
			for (jj = 0; sep[jj] != '\0'; jj++)
			{
				if (str[j - 1] == sep[jj])
				{
					flag = 1;
					break;
				}
			}
		}

		if (flag == 1)
		{
			if (str[j] <= 'z' && str[j] >= 'a')
			{
				str[j] -= ('a' - 'A');
			}
		}
	}
	return (str);
}

