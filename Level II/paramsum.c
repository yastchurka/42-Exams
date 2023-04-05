/* Assignment name  : paramsum
Expected files   : paramsum.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays the number of arguments passed to it, followed by
a newline.

If there are no arguments, just display a 0 followed by a newline.

Example:

$>./paramsum 1 2 3 5 7 24
6
$>./paramsum 6 12 24 | cat -e
3$
$>./paramsum | cat -e
0$
$> */

#include <unistd.h>

int ft_putnbr(int i)
{
    int score;
    if (i > 9)
        ft_putnbr(i / 10);
    i = i % 10 + '0';
    write(1, &i, 1);
}

int main(int argv, char ** argc)
{
    int i = 0;
    if (argv == 1)
    {
        write(1, "0", 1);
        write(1, "\n", 1);
        return (0);
    }
    else
    {
        while (argc[i])
            i++;
        i--;
        ft_putnbr(i);
    }
    write(1, "\n", 1);
    return (0);
}