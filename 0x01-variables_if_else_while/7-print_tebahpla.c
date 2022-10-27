#include <stdio.h>

/**
  *main - Entry
  *
  * Return: 0
  */
int main(void)
{
	char V;

	for (V = 'z'; V >= 'a'; V--)
		putchar(V);
	putchar('\n');

	return (0);
}
