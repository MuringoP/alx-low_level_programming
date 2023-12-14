#include <stdio.h>

/**
 * is_palindrome - Check if a number is a palindrome.
 * @number: The number to check.
 * Return: 1 if palindrome, 0 otherwise.
 */
int is_palindrome(int number)
{
	char str[10];
	int i, length;

	sprintf(str, "%d", number);
	length = 0;

	while (str[length] != '\0')
		length++;

	for (i = 0; i < length / 2; i++)
	{
		if (str[i] != str[length - i - 1])
			return (0);
	}

	return (1);
}

/**
 * find_largest_palindrome - Find the largest palindrome
 *                          made from the product of two 3-digit numbers.
 * Return: The largest palindrome.
 */
int find_largest_palindrome()
{
	int largest_palindrome = 0;
	int i, j, product;

	for (i = 100; i < 1000; i++)
	{
		for (j = 100; j < 1000; j++)
		{
			product = i * j;
			if (is_palindrome(product) && product > largest_palindrome)
				largest_palindrome = product;
		}
	}

	return (largest_palindrome);
}

/**
 * main - Entry point.
 * Return: Always 0 (Success).
 */
int main(void)
{
	int result = find_largest_palindrome();

	FILE *file = fopen("102-result", "w");
	if (file != NULL)
	{
		fprintf(file, "%d", result);
		fclose(file);
	}

	return (0);
}
