#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints Alphabet in lower case
 * Return: shows 0 (success)
 */
int main(void)
{
	int ch = 'a';
		while (ch <= 'z')
		{
			putchar(ch);
			ch++;
		}
		putchar('\n');
		return (0);
}
