/*
** EPITECH PROJECT, 2019
** my_strcapitalize.c
** File description:
** Capitalize first letter of each word
*/

void my_strcapitalize_words(char *str, int capitalize, int i)
{
    if (str[i] >= 'a' && str[i] <= 'z' && capitalize == 1)
        str[i] = str[i] - 32;
    else if (str[i] >= 'A' && str[i] <= 'Z' && capitalize == 0)
        str[i] = str[i] + 32;
}

char *my_strcapitalize(char *str)
{
    int i = 0;
    int capitalize = 1;

    while (str[i] != '\0') {
        if ((str[i] >= '1' && str[i] <= '9') ||
            (str[i] >= 'a' && str[i] <= 'z') ||
            (str[i] >= 'A' && str[i] <= 'Z')) {
            my_strcapitalize_words(str, capitalize, i);
            capitalize = 0;
        }
        else
            capitalize = 1;
        i++;
    }
    return str;
}
