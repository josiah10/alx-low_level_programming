0x02. C - Functions, nested loops
README.md


0x02. C - Functions, nested loops



0-putchar.c


#include "main.h"

/**

 * main - print _putchar

 * is written by mbah

 * Return: 0

 */


int main(void)

{

_putchar('_');

_putchar('p');

_putchar('u');

_putchar('t');

_putchar('c');

_putchar('h');

_putchar('a');

_putchar('r');

_putchar('\n');

return (0);

}



1-alphabet.c


#include "main.h"


/**

 * print_alphabet - print all alphabet in lowercase

 */


void print_alphabet(void)

{

        char letter;


        for (letter = 'a'; letter <= 'z'; letter++)

                _putchar(letter);


        _putchar('\n');

}




2-print_alphabet_x10.c


#include "main.h"


/**

 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,

 * followed by a new line

 */

void print_alphabet_x10(void)

{

        char ch;

        int i;


        i = 0;


        while (i < 10)

        {

                ch = 'a';

                while (ch <= 'z')

                {

                        _putchar(ch);

                        ch++;

                }

                _putchar('\n');

                i++;

        }

}
