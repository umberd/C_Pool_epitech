/*
** EPITECH PROJECT, 2019
** my_params_to_list.c
** File description:
** take params to a list
*/

#include <stdlib.h>
#include "./include/my.h"
#include "./include/mylist.h"

linked_list_t *my_params_to_list(int ac, char * const *av)
{
    linked_list_t *my_list;

    if (ac == 0)
        return 0;
    if (ac > 0) {
        my_list = malloc(sizeof(*my_list));
        my_list->data = (void *) av[ac - 1];
        my_list->next = my_params_to_list(ac - 1,  av);
    }

    return my_list;
}
