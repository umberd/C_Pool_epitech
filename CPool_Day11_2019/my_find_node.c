/*
** EPITECH PROJECT, 2019
** my_find_node.c
** File description:
** a function named my_find_node that returns adress
*/

#include <stdlib.h>
#include "./include/mylist.h"

linked_list_t *my_find_node(linked_list_t const *begin,
                            void const *data_ref, int (*cmp)())
{
    if (begin != NULL) {
        if (cmp(begin->data, data_ref) == 0)
            return ((linked_list_t *) begin);
        return my_find_node(begin->next, data_ref, cmp);
    }
    return 0;
}
