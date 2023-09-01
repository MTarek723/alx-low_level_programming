#include <stdio.h>
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}
	else
	{
		int num1;
		int num2;
		char *x;
		char *y;
		int i = 0;

		num1 = 0;
		num2 = 0;

		x = argv[1];
		for (i = 0; x[i] != 0; ++i)
		{
			num1 = num1 * 10 + (x[i] - 48);
		}
		y = argv[2];
		for (i = 0; y[i] != 0; ++i)
		{
			num2 = num2 * 10 + (y[i] - 48);
		}
		printf("%d\n", num1 * num2);
		return (0);
	}
}

