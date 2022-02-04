#include <stdio.h>
#include <ctype.h>
/**
 * main - prints reverse alphabet
 * Return: Allways 0
 */

int main(void)
{
char ch;

for (ch = 'Z'; ch >= 'A'; --ch)
{
putchar(tolower(ch));

}
putchar('\n');

return (0);
}
