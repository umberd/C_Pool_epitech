/*
** EPITECH PROJECT, 2019
** btree_apply_prefix.c
** File description:
** btree apply prefix
*/

#include <unistd.h>
#include "./include/btree.h"

void btree_apply_suffix(btree_t *root, int (*applyf)(void *))
{
    if (root != NULL) {
        if (root->left != NULL)
            btree_apply_suffix(root->left, applyf);
        if (root->right != NULL)
            btree_apply_suffix(root->right, applyf);
        applyf(root->item);
    }
}
