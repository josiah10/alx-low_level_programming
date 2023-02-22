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



8-24_hours.c


#include "main.h"


/**

 * jack_bauer - prints every minute of the day of Jack Bauer

 * starting from 00:00 to 23:59

 */

void jack_bauer(void)

{

        int i, j;


        i = 0;


        while (i < 24)

        {

                j = 0;

                while (j < 60)

                {

                        _putchar((i / 10) + '0');

                        _putchar((i % 10) + '0');

                        _putchar(':');

                        _putchar((j / 10) + '0');

                        _putchar((j % 10) + '0');

                        _putchar('\n');

                        j++;

                }

                i++;

        }

}



9-times_table.c


#include "main.h"


/**

 * times_table - prints the 9 times table, starting with 0

 */

void times_table(void)

{

        int i, j, k;


        for (i = 0; i < 10; i++)

        {

                for (j = 0; j < 10; j++)

                {

                        k = j * i;

                        if (j == 0)

                        {

                                _putchar(k + '0');

                        }


                        if (k < 10 && j != 0)

                        {

                                _putchar(',');

                                _putchar(' ');

                                _putchar(' ');

                                _putchar(k + '0');

                        } else if (k >= 10)

                        {

                                _putchar(',');

                                _putchar(' ');

                                _putchar((k / 10) + '0');

                                _putchar((k % 10) + '0');

                        }

                }

                _putchar('\n');

        }

}



10-add.c


#include "main.h"


/**

 * add - adds two integers and returns the result

 * @a: int to be added to b

 * @b: int to be added to a

 * Return: sum of a and b

 */

int add(int a, int b)

{

        int c;


        c = a + b;


        return (c);

}
