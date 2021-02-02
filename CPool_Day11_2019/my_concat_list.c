/*
** EPITECH PROJECT, 2019
** my_concat_list.c
** File description:
** Concat 2 lists
*/

#include <stdlib.h>
#include "./include/mylist.h"

void my_concat_list(linked_list_t **begin1, linked_list_t *begin2)
{
    linked_list_t *list = *begin1;

    if ((*begin1) == NULL && begin2 != NULL) {
        *begin1 = begin2;
        return;
    } else if (*begin1 != NULL && begin2 == NULL)
        return;
    if (list->next)
        my_concat_list(&(list->next), begin2);
    else
        list->next = begin2;
}
