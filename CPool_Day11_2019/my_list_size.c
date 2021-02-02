/*
** EPITECH PROJECT, 2019
** my_list_size.c
** File description:
** give the list size
*/

#include "./include/mylist.h"

int my_list_size(linked_list_t const *begin)
{
    if (begin == 0)
        return 0;
    if (begin->next != 0)
        return (my_list_size(begin->next) + 1);
    return (1);
}
