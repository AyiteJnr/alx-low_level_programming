#include "main.h"
/**
 * print_alphabet - print alphabets
 *
 */
void print_alphabet(void)
{
	char al;

	al = 'a';
	while (al <= 'z')
	{
		_puchar(al);
		al++;
	}
	_puchar('\n');
}
