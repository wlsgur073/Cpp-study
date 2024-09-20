#include <stdio.h>

void ft_putstr(char* str)
{
    while (*str)
        printf("%c", str++);
}

int ft_strcmp(char* s1, char* s2)
{
    while (*s1 && *s1 == *s2)
    {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}

int main(int argc, char* argv[])
{
    char* temp;
    int i;
    int j;

    i = 0;
    while (i++ < argc - 1)
    {
        j = 0;
        while (j++ < argc - 1)
        {
            if (ft_strcmp(argv[j], argv[j + 1]) > 0)
            {
                temp = argv[j + 1];
                argv[j + 1] = argv[j];
                argv[j] = temp;
            }
        }
    }

    i = 1;
    while (i < argc - 1)
    {
        ft_putstr(argv[i]);
        printf("\n");
        i++;
    }

    return 0;
}