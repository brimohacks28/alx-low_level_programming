#include "main.h"
/**
 * *cap_string - word Captilization
 * @str: pointer
 * Return: capitilized string sucess.
 */
char *cap_string(char *str)
{
	int i = 0;
	/*iterate through our array values*/
	while (s[i] != '\0')
	{
		/*iterate through our arrat values*/
		while (s[i] != '\0')
		{
			/*checking for any lowercase letters*/
			if (s[i] >= 97 && s[i] <= 122)
			{
				/**
				 * if null character present
				 * change value to capital
				 */
				if (i == 0)
				{
					s[i] -= 32;
				}
				/**
				 * if we find any character matching the
				 * below before any letter is capitalized
				 *
				 *
				 */
				if (s[i - 1] == 32 || s[i - 1] == 9 || s[i - 1] == 10 ||
						s[i - 1] == 44 || s[i - 1] == 59 || s[i - 1] == 46 ||
						s[i - 1] == 33 || s[i - 1] == 63 || s[i - 1] == 34 ||
						s[i - 1] == 40 || s[i - 1] == 41 || s[i - 1] == 124)
				{
					s[i] -= 32;
				}
			}
			i++;
		}
		return (s);
	}
}
