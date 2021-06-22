#include "holberton.h"
/**
 * print_alphabet - check the code for ALX School students.
 * Description: It will print all alphabet latter in lowercase.
 * Return: Always 0.
 */
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar(10);
}
