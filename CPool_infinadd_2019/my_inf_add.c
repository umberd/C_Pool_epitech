/*
** EPITECH PROJECT, 2019
** my_inf_add.c
** File description:
** my_inf_add
*/

#include <unistd.h>
#include <stdio.h>
#include "./include/my.h"
#include "./include/tools.h"

char *inf_add(char *nb1, char *nb2)
{
    int nb_tmp = 0;
    int retenu = 0;
    char *result = NULL;
    int i = 0;

    my_revstr(nb1);
    my_revstr(nb2);
    while (nb1[i] != '\0' && nb2[i] != '\0') {
        nb_tmp = nb1[i] + nb2[i] - (2 * '0') + retenu;
        retenu = nb_tmp / 10;
        result = malloc_digit(result, i);
        result[i] = nb_tmp % 10 + '0';
        i++;
    }
    if (nb1[i] != '\0') {
        for (i = i; nb1[i] != '\0'; i++) {
            nb_tmp = nb1[i] - '0' + retenu;
            retenu = nb_tmp / 10;
            result = malloc_digit(result, i);
            result[i] = nb_tmp % 10 + '0';
        }
    } else
        for (i = i; nb2[i] != '\0'; i++) {
            nb_tmp = nb2[i] - '0' + retenu;
            retenu = nb_tmp / 10;
            result = malloc_digit(result, i);
            result[i] = nb_tmp % 10     + '0';
        }
    if (retenu != 0) {
        result = malloc_digit(result, i);
        result[i] = retenu + '0';
    }
    my_revstr(result);
    return result;
}
