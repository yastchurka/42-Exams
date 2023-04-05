/* Assignment name  : tab_mult
Expected files   : tab_mult.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays a number's multiplication table.

The parameter will always be a strictly positive number that fits in an int,
and said number times 9 will also fit in an int.

If there are no parameters, the program displays \n.

Examples:

$>./tab_mult 9
1 x 9 = 9
2 x 9 = 18
3 x 9 = 27
4 x 9 = 36
5 x 9 = 45
6 x 9 = 54
7 x 9 = 63
8 x 9 = 72
9 x 9 = 81
$>./tab_mult 19
1 x 19 = 19
2 x 19 = 38
3 x 19 = 57
4 x 19 = 76
5 x 19 = 95
6 x 19 = 114
7 x 19 = 133
8 x 19 = 152
9 x 19 = 171
$>
$>./tab_mult | cat -e
$
$> */

#include <unistd.h>

void ft_putstring(char *string)
{
    int i = 0;
    while (string[i] != '\0')
    {
        write(1, &string[i], 1);
        i++;
    }
}


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void putnbr(int nb)
{
    if (nb > 9)
	{
		putnbr(nb / 10);
	}
		ft_putchar((nb % 10) + '0');
}

int fucking_atoi(char* c)
{
    int i = 0;
    int nb = 0;

    while (c[i] != '\0')
    {
        nb = nb * 10 + (c[i] - 48);
        i++;
    }
    return (nb);
}

#include <stdio.h>
int main(int argv, char* argc[])
{
    int i = 1;
    if (argv == 2)
    {
        int score = 0;
        while (i <= 9)
        {
            putnbr(i);
            write(1, " x ", 3);
            ft_putstring(argc[1]);
            write(1, " = ", 3);
            score = i * fucking_atoi(argc[1]);
            putnbr(score);
            i++;
            write(1, "\n", 1);
        }
        return (0);
    }
    write(1, "\n", 1);
    return (1);
}