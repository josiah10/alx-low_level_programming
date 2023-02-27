0x05. C - Pointers, arrays and strings
README


C - Pointers, arrays and strings

#TASKS

98 Battery st.
Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.

Prototype: void reset_to_98(int *n);

Don't swap horses in crossing a stream
Write a function that swaps the values of two integers.

Prototype: void swap_int(int *a, int *b);

This report, by its very length, defends itself against the risk of being read
Write a function that returns the length of a string.

Prototype: int _strlen(char *s); FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.

I do not fear computers. I fear the lack of them
Write a function that prints a string, followed by a new line, to stdout.

Prototype: void _puts(char *str); FYI: The standard library provides a similar function: puts. Run man puts to learn more.

I can only go one way. I've not got a reverse gear
Write a function that prints a string, in reverse, followed by a new line.

Prototype: void print_rev(char *s);

A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes
Write a function that reverses a string.

Prototype: void rev_string(char *s);

Half the lies they tell about me aren't true
Write a function that prints every other character of a string, starting with the first character, followed by a new line.

Prototype: void puts2(char *str);

Winning is only half of it. Having fun is the other half
Write a function that prints half of a string, followed by a new line.

Prototype: void puts_half(char *str); The function should print the second half of the string If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2

Arrays are not pointers
Write a function that prints n elements of an array of integers, followed by a new line.

Prototype: void print_array(int *a, int n); where n is the number of elements of the array to be printed Numbers must be separated by comma, followed by a space The numbers should be displayed in the same order as they are stored in the array You are allowed to use printf

strcpy
Prototype: char *_strcpy(char *dest, char *src); Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.

Return value: the pointer to dest FYI: The standard library provides a similar function: strcpy. Run man strcpy to learn more.

Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the number Write a function that convert a string to an integer.
Prototype: int _atoi(char *s); The number in the string can be preceded by an infinite number of characters You need to take into account all the - and + signs before the number If there are no numbers in the string, the function must return 0 You are not allowed to use long You are not allowed to declare new variables of “type” array You are not allowed to hard-code special values We will use the -fsanitize=signed-integer-overflow gcc flag to compile your code. FYI: The standard library provides a similar function: atoi. Run man atoi to learn more.

Don't hate the hacker, hate the code
Create a program that generates random valid passwords for the program 101-crackme.

You are allowed to use the standard library You don’t have to pass the betty-style tests (you still need to pass the betty-doc tests) man srand, rand, time gdb and objdump can help



===============================================


MAIN.H file



#ifndef MAIN_H

#define MAIN_H


#include <stdio.h>

#include <unistd.h>


int _putchar(char c);

void reset_to_98(int *n);

void swap_int(int *a, int *b);

int _strlen(char *s);

void _puts(char *str);

void print_rev(char *s);

void rev_string(char *s);

void puts2(char *str);

void puts_half(char *str);

void print_array(int *a, int n);

char *_strcpy(char *dest, char *src);


#endif



===============================================


0-reset_to_98.c


#include "main.h"

/**

 * reset_to_98 - a function that takes a pointer to an int as parameter

 * and updates the value it points to to 98

 * @n: input

 * Return: n

 */

void reset_to_98(int *n)

{

        *n = 98;

}



=============================================


1-swap.c


#include "main.h"

/**

 * swap_int - swaps the values of two integers

 * @a: integer to swap

 * @b: integer to swap

 */

void swap_int(int *a, int *b)

{

        int m;


        m = *a;

        *a = *b;

        *b = m;

}



===============================================



2-strlen.c


#include "main.h"

/**

 * _strlen - returns the length of a string

 * @s: string

 * Return: length

 */

int _strlen(char *s)

{

        int longi = 0;


        while (*s != '\0')

        {

                longi++;

                s++;

        }


        return (longi);

}



=============================================


3-puts.c


#include "main.h"

/**

 * _puts - prints a string, followed by a new line, to stdout

 * @str: string to print

 */

void _puts(char *str)

{

        while (*str != '\0')

        {

                _putchar(*str++);

        }

                _putchar('\n');

}



=============================================



4-print_rev.c



#include "main.h"

/**

 * print_rev - imprime en reversa

 * @s: string

 * return: 0

 */

void print_rev(char *s)

{

        int longi = 0;

        int o;


        while (*s != '\0')

        {

                longi++;

                s++;

        }

        s--;

        for (o = longi; o > 0; o--)

        {

                _putchar(*s);

                s--;

        }


        _putchar('\n');

}



=============================================



5-rev_string.c


#include "main.h"


/**

 * rev_string - Reverses a string

 * @s: Input string

 * Return: String in reverse

 */


void rev_string(char *s)

{

        char rev = s[0];

        int counter = 0;

        int i;


        while (s[counter] != '\0')

        counter++;

        for (i = 0; i < counter; i++)

        {

                counter--;

                rev = s[i];

                s[i] = s[counter];

                s[counter] = rev;

        }

}



=============================================



6-puts2.c


#include "main.h"

/**

 * puts2 - function should print only one character out of two

 * starting with the first one

 * @str: input

 * Return: print

 */

void puts2(char *str)

{

        int longi = 0;

        int t = 0;

        char *y = str;

        int o;


        while (*y != '\0')

        {

                y++;

                longi++;

        }

        t = longi - 1;

        for (o = 0 ; o <= t ; o++)

        {

                if (o % 2 == 0)

        {

                _putchar(str[o]);

        }

        }

        _putchar('\n');

}



=============================================



7-puts_half.c


#include "main.h"

/**

 * puts_half - a function that prints half of a string

 * if odd len, n = (length_of_the_string - 1) / 2

 * @str: input

 * Return: half of input

 */

void puts_half(char *str)

{

        int a, n, longi;


        longi = 0;


        for (a = 0; str[a] != '\0'; a++)

                longi++;


        n = (longi / 2);


        if ((longi % 2) == 1)

                n = ((longi + 1) / 2);


        for (a = n; str[a] != '\0'; a++)

                _putchar(str[a]);

        _putchar('\n');

}




=============================================



8-print_array.c


#include "main.h"


/**

 * print_array - a function that prints n elements of an array

 * @a: array name

 * @n: is the number of elements OF the array to be printed

 * Return: a and n inputs

 */

void print_array(int *a, int n)

{

        int i;


        for (i = 0; i < (n - 1); i++)

        {

                printf("%d, ", a[i]);

        }

                if (i == (n - 1))

                {

                        printf("%d", a[n - 1]);

                }

                        printf("\n");

}




============================================



9-strcpy.c


#include "main.h"


/**

 * char *_strcpy - a function that copies the string pointed to by src

 * @dest: copy to

 * @src: copy from

 * Return: string

 */

char *_strcpy(char *dest, char *src)

{

        int l = 0;

        int x = 0;


        while (*(src + l) != '\0')

        {

                l++;

        }

        for ( ; x < l ; x++)

        {

                dest[x] = src[x];

        }

        dest[l] = '\0';

        return (dest);

}



=============================================



100-atoi.c


#include "main.h"


/**

 * _atoi - converts a string to an integer

 * @s: string to be converted

 *

 * Return: the int converted from the string

 */

int _atoi(char *s)

{

        int i, d, n, len, f, digit;


        i = 0;

        d = 0;

        n = 0;

        len = 0;

        f = 0;

        digit = 0;


        while (s[len] != '\0')

                len++;


        while (i < len && f == 0)

        {

                if (s[i] == '-')

                        ++d;


                if (s[i] >= '0' && s[i] <= '9')

                {

                        digit = s[i] - '0';

                        if (d % 2)

                                digit = -digit;

                        n = n * 10 + digit;

                        f = 1;

                        if (s[i + 1] < '0' || s[i + 1] > '9')

                                break;

                        f = 0;

                }

                i++;

        }


        if (f == 0)

                return (0);


        return (n);

}
