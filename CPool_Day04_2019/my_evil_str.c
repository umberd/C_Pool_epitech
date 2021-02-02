/*
** EPITECH PROJECT, 2019
** my_evil_str.c
** File description:
** The evil str that swap every elements
*/

int my_strlen(char const *);
void my_swap(int *a, int *b);
void my_swap_char(char *a, char *);

char *my_evil_str(char *str)
{
    int len_str = my_strlen(str);

    for (int i = 0; i < len_str / 2; i++)
        my_swap_char(str + i, str + len_str - 1 - i);
    str[len_str] = '\0';
    return str;
}

void my_swap_char(char *a, char *b)
{
    int swap;

    swap = *a;
    *a = *b;
    *b = swap;
}
