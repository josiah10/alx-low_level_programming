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



3-islower.c


#include "main.h"


/**

 * _islower - check if char is lowercase

 * @c: is the char to be checked

 * Return: 1 if char is lowercase, otherwise 0.

 */


int _islower(int c)

{

        if (c >= 'a' && c <= 'z')

                return (1);

        else

                return (0);

}

        



4-isalpha.c


#include "main.h"


/**

 * _isalpha - checks for alphabetic character

 * @c: the character to be checked

 * Return: 1 if c is a letter, 0 otherwise

 */

int _isalpha(int c)

{

        return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));

}



5-sign.c


#include "main.h"


/**

 * print_sign - prints the sign of a number

 * @n: the int to check

 * Return: 1 and prints + if n is greater than zero

 * 0 and prints 0 if n is zero

 * -1 and prints - if n is less than zero

 */

int print_sign(int n)

{

        if (n > 0)

        {

                _putchar('+');

                return (1);

        } else if (n == 0)

}

                _putchar(48);

                return (0);

        } else if (n < 0)

        {

                _putchar('-');

        }

                return (-1);

}



6-abs.c


#include "main.h"


/**

 * _abs - computes the absolute value of an integer

 * @n: the int to check

 * Return: the absolute value of int

 */

int _abs(int n)

{

        if (n >= 0)

        {

                return (n);

        }

        return (-n);

}



7-print_last_digit.c


#include "main.h"


/**

 * print_last_digit - prints the last digit of a number

 * @n: the int to extract the last digit from

 * Return: value of the last digit

 */

int print_last_digit(int n)

{

        int a;


        if (n < 0)

        n = -n;


        a = n % 10;


        if (a < 0)

                a = -a;


        _putchar(a + '0');


        return (a);

}
