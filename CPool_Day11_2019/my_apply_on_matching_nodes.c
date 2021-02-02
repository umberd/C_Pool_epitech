/*
** EPITECH PROJECT, 2019
** my_apply_on_matching_nodes.c
** File description:
** apply a function if cmp match
*/

#include "./include/mylist.h"

int my_apply_on_matching_nodes(linked_list_t *begin, int (*f)(),
                            void const *data_ref, int (*cmp)())
{
    if (begin != 0) {
        if ((*cmp)(begin->data, data_ref) == 0)
            (*f)(begin->data);
        my_apply_on_matching_nodes(begin->next, f, data_ref, cmp);
    }
    return 0;
}
