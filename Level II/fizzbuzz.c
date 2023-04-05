#include <unistd.h>
#include <stdio.h>

void putnum(int p, int i)
{
    p = i / 10 + '0';
    write(1, &p, 1);
    p = i % 10 + '0';
    write(1, &p, 1);
    write(1, "\n", 1);
}

int main(void)
{
    int i = 1;
    
    while (i <= 100)
    {
        int p = i + '0';
        if (i % 3 == 0 && i % 5 == 0)
        {
            write(1, "fizzbuzz", 8);
            write(1, "\n", 1);
        }
        else if (i % 3 == 0)
        {
            write(1, "fizz", 4);
            write(1, "\n", 1);
        }
        else if (i % 5 == 0)
        {
            write(1, "buzz", 4);
            write(1, "\n", 1);
        }
        else if (i <= 9)
        {
            write(1, &p, 1);
            write(1, "\n", 1);
        }
        else
            putnum(p, i);
        i++;
    }
    return (0);
}