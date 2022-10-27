#include <stdio.h>

/**
  * main - Entry
  * Return: 0
  */
int main(void)
{
	int k, l, m;

	for (l = '0'; l <= '9'; l++)
	{
		for (m = '0'; m <= '9'; m++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				if (l < m && m < k)
				{
					putchar(l);
					putchar(m);
					putchar(k);
					if (l == '7' && m == '8' && k == '9')
					{
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

