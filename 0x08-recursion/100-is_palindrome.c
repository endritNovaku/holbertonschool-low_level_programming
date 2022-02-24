#include "main.h"
/**
 * find_length - find the length of a string
 * @s: string
 * Return: 0
 */
int find_length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + find_length(s + 1));
	}
}
/**
 * check_palindrome - check palindrome
 * @s: string
 * @index: index
 * @length: length of the string
 * Return: 1 or 0
 */
int check_palindrome(char *s, int index, int length)
{

	if (s[index] == s[length / 2])
	{
		return (1);
	}

	if (s[index] == s[length - index - 1])
	{
		return (check_palindrome(s, index + 1, length));
	}

	return (0);
}
/**
 * is_palindrome - check if a string is palindrome
 * @s: string
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	int i = 0;
	int l = find_length(s);

	if (!*s)
	{
		return (1);
	}
	return (check_palindrome(s, i, l));
}
