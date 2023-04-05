/* Assignment name  : rot_13
Expected files   : rot_13.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the letter 13 spaces ahead in alphabetical order.

'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.

The output will be followed by a newline.

If the number of arguments is not 1, the program displays a newline.

Example:

$>./rot_13 "abc"
nop
$>./rot_13 "My horse is Amazing." | cat -e
Zl ubefr vf Nznmvat.$
$>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
NxwuM mYXVWm , 23l $
$>./rot_13 | cat -e
$
$>
$>./rot_13 "" | cat -e
$
$> */

#include <unistd.h>

int main (int argv, char** argc)
{
    int i = 0;
    int b;
    char * string = argc[1];

    if (argv == 2)
    {
        while (string[i] != '\0')
        {
            if (string[i] >= 'a' && string[i] <= 'z')
            {
                b = string[i];
                b += 13;
                if (b > 122)
                    b = b - 26;
                write(1, &b, 1);
                i++;
            }
            else if (string[i] >= 'A' && string[i] <= 'Z')
            {
                b = string[i];
                b += 13;
                if (b > 90)
                    b -= 26;
                write(1, &b, 1);
                i++;
            }
            else
            {
                write(1, &string[i], 1);
                i++;
            }
        }
    }
    write(1, "\n", 1);
}