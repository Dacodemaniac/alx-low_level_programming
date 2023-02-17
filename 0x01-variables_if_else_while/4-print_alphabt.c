#include <stdio.h>
#include <stdlib.h>
/*
 * main - a program that prints the alphabet in lowercase
 * Return: This shows 0 (successful)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if ((ch != 'e') && (ch != 'q'))
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
