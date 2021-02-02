/*
** EPITECH PROJECT, 2019
** my_str_to_word_array.c
** File description:
** split a string into words
*/

#include <stdlib.h>

int my_check_number_of_words(char const *str);
int my_str_to_word_array_len(int *len_a, int *len_b, char const *str, int i);
void my_str_to_word_a_print(char const *str, int len, int *word, char **dest);

int is_alpha_num(char const c)
{
    if ((c >= '1' && c <= '9') ||
        (c >= 'a' && c <= 'z') ||
        (c >= 'A' && c <= 'Z'))
        return 1;
    return 0;
}

char **my_str_to_word_array(char const *str)
{
    int len_a = -1;
    int len_b = -1;
    int word[2] = {0, 0};
    char **dest;

    word[0] = my_check_number_of_words(str);
    dest = malloc(word[0] * sizeof(char *) + 1);
    for (int i = 0; str[i] != '\0'; i++) {
        if (is_alpha_num(str[i]) == 1) {
            i = my_str_to_word_array_len(&len_a, &len_b, str, i) - 1;
        }
        if (len_a != -1) {
            my_str_to_word_a_print(str + len_a, len_b - len_a, word, dest);
            len_a = -1;
        }
    }
    return dest;
}

int my_check_number_of_words(char const *str)
{
    int len_a = -1;
    int len_b = -1;
    int word = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (is_alpha_num(str[i]) == 1) {
            i = my_str_to_word_array_len(&len_a, &len_b, str, i) - 1;
            word = word + 1;
        }
    }
    return word;
}

int my_str_to_word_array_len(int *len_a, int *len_b, char const *str, int i)
{
    *len_a = i;
    for (i = i; is_alpha_num(str[i]); i++);
    *len_b = i;
    return i;
}

void my_str_to_word_a_print(char const *str, int len, int *word, char **dest)
{
    int i;

    dest[word[1]] = malloc(sizeof(char) * (len + 1));
    for (i = 0; i < len; i++) {
        dest[word[1]][i] = str[i];
    }
    dest[word[1]][i] = '\0';
    word[1] += 1;
}
