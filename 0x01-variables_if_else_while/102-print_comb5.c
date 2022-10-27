#include <stdio.h>

/**
  * main - Entry
  * Return: 0
*/
int main(void)
{
	int o, p;

	for (o = 0; o < 99; o++)
	{
		for (p = o + 1; p <= 99; p++)
		{
			putchar('0' + o / 10);
			putchar('0' + o % 10);

			putchar(' ');

			putchar('0' + p / 10);
			putchar('0' + p % 10);

			if (o == 98 && p == 99)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

