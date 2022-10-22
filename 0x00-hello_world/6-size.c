#include <stdio.h>

/**
  * main - Entry point of the program
  *
  * Return: 0
  */
int main(void)
{
	printf("Size of int : %d byte(s)\n", sizeof(int));
	printf("Size of char : %c byte(s)\n", sizeof(char));
	printf("Size of long int : %ld bytes(s)\n", sizeof(long int));
	printf("Size of long long int : %lld bytes(s)\n", sizeof(long long in
				t));
	printf("Size of float : %f byte(s)\n", sizeof(float));

	return (0);
}
