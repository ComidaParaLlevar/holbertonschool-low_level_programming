#include "main.h"
/**
 *rev_string- prints a string in reverse
 *@s: string to print
 */

void rev_string(char *s)
{
	int c = 0;
	int p = 0;
	int hold;
	int pt;

	while (s[c] != '\0')
	{
		c++;
	}
	c--;
	pt = c;
	while (p < pt)
	{
		hold = *(s + p);
		*(s + p) = *(s + pt);
		*(s + pt) = hold;
		p++;
		pt--;
	}
}
