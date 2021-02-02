/*
** EPITECH PROJECT, 2019
** btree_searsh_item.c
** File description:
** search_item
*/

#include <unistd.h>
#include "./include/btree.h"

void *btree_search_item(btree_t const *root, void const *data_ref,
                        int (*cmpf)())
{
    btree_t *tmp;

    if (root != NULL) {
        tmp = btree_search_item(root->left, data_ref, cmpf);
        if (tmp != NULL)
            return tmp;
        if (cmpf(data_ref, root->item) == 0)
            return (btree_t *) root;
        tmp = btree_search_item(root->right, data_ref, cmpf);
        if (tmp != NULL)
            return tmp;
    }
    return NULL;
}
