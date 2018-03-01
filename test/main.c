#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
/*	unsigned int ui;
	void *addr;
*/
	_printf("_printf: Let's try to printf a simple sentence.\n");
	printf(" printf: Let's try to printf a simple sentence.\n");

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("INT MIN: %d\n", -2147483648);
	printf("INT MIN: %d\n", INT_MIN);
/*	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
*/	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
/*	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
*/	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');

	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");

/*	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
*/	len = _printf("[%%s%%%c]%c%d\n", "I am a string",'G', 'H', 555);
	len2 = printf("[%%s%%%c]%c%d\n", "I am a string",'G', 'H', 555);
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
/*	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");
*/	return (0);
}