#include "main.h"

/**
  * print_alphabet_x10.c - prints all alphabet 1o times in a new line
  * Return: returns 1
  */

int main(void)
{

	char j, k;

		for (k = 0; k < 10; k++)
		{
			for (j = 'a'; j <= 'z'; j++)
			{
				_putchar(j);
			}
			_putchar('\n');
		}
}
