#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * main - Returns all single units
 * Description: prints all single digit
 * Returns: return 0 (success)
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
