#include <stdio.h>

/**
  * main - Entry point of the program
  *
  * Return: returns to zero
  */
int main(void)
{
	char x;
	char y;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (y = 'A'; y <= 'Z'; y++)
	{
		putchar(y);
	}
	putchar('\n');
		return (0);
}
