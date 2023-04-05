#include <unistd.h>
#include <stdio.h>

int calculator(int argc)
{
    int repetition;
    if (argc >= 'a' && argc <= 'z')
        repetition = argc - 'a' + 1;
    else if (argc >= 'A' && argc <= 'Z')
        repetition = argc - 'A' + 1;
    else
        return 1;
    return (repetition);
}

int main(int argv, char **argc)
{
    int i = 0;
    int p = 0;

    if (argv == 2)
    {
        while (argc[1][p])
        {
            int calc = calculator(argc[1][p]);
            i = 0;
            while(i < calc)
            {
                write(1, &argc[1][p], 1);
                i++;
            }
            p++;
        }
    }
    write(1, "\n", 1);
    return (0);
}