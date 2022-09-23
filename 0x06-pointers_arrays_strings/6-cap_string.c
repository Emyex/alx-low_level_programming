#include "main.h"

/**
 * cap_string - capitalize every word in a string
 * @targ: string input to have words of capitalized
 * Return: the string with capitalized words
 */

char *cap_string(char *targ)

{
	char *sep = " \t\n,;.!?\"(){}";

	int i = 0, j = 0, cap = 1, k = 0;

	for (; targ[i]; i++)
		for (; j < i; j++)
		{
			if (targ[j] >= 'A' && targ[j] <= 'Z')
				cap = 0;
			if ((targ[j] >= 'a' && targ[j] <= 'z') && cap == 1)
			{
				targ[j] = ((targ[j] - 'a') + 'A');
				cap = 0;
			}
			for (k = 0; sep[k]; k++)
			{
				if (targ[j] == sep[k])
				{
					cap = 1;
					if (!(targ[j + 1] <= 'z' && targ[j + 1] >= 'a'))
						cap = 0;
				}
			}
		}
	return (targ);
}
