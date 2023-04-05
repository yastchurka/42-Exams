/* Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src); */


#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int leng(char *src)
{
    int i = 0;
    while (src[i] != '\0')
        i++;
    return (i);
}

char    *ft_strdup(char *src)
{
    char len = leng(src);
    int i = -1;
    char *dst;

    dst = (char *) malloc (sizeof(char) * len + 1);
    if (!dst)
        return (NULL);
    while (++i < len)
        dst[i] = src[i];
    dst[i] = '\0';
    return (&(*dst));
}

/* int main(void)
{
    char *string1 = "hello";
    printf("%s", ft_strdup(string1));
} */