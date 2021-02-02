/*
** EPITECH PROJECT, 2019
** my_inf_add.c
** File description:
** my_inf_add
*/

#include <stdio.h>
#include <stdlib.h>
#include "./include/my.h"
#include "./include/tools.h"
#include "./include/my_inf_add.h"
#include "./include/my_macro_abs.h"

char *my_strcpy_spec(char *dest, char const *src)
{
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    while (dest[i] != '\0')
        dest[i] = '0';
    return dest;
}

char *nb_comp_equalize(char *result, int len_result)
{
    my_revstr(result);
    result = malloc_digit(result, len_result);
    for (int i = 0; i < len_result; i++)
        if (result[i] < '0' || result[i] > '9')
            result[i] = '0';
    return my_revstr(result);
}

char *nb_complement(char *nb)
{
    char cpm[] = "9876543210";
    char nor[] = "0123456789";

    for (int i = 0; nb[i] != '\0'; i++) {
        for (int j = 0; j < 10; j++) {
            if (nb[i] == nor[j]) {
                nb[i] = cpm[j];
                j = 10;
            }
        }
    }
    return nb;
}

char *inf_less(char *nb1, char *nb2, int *is_neg)
{
    char *result;
    char tmp[] = "1";
    int len1 = my_strlen(nb1);
    int len2 = my_strlen(nb2);
    char *nb1_cpy = malloc(sizeof(char) * (my_strlen(nb1) + 1));
    char *nb2_cpy = malloc(sizeof(char) * (my_strlen(nb2) + 1));

    my_strcpy(nb1_cpy, nb1);
    my_strcpy(nb2_cpy, nb2);
    if (len1 > len2)
        nb2_cpy = nb_comp_equalize(nb2_cpy, len1);
    nb2_cpy = nb_complement(nb2_cpy);
    result = inf_add(nb1_cpy, nb2_cpy);
    if ((my_strlen(result) > len1) && (my_strlen(result) > len2))
        return (inf_add(result, tmp) + 1);
    *is_neg = 1;
    return nb_complement(result);
}
