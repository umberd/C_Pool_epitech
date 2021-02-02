/*
** EPITECH PROJECT, 2019
** btree_apply_prefix.c
** File description:
** btree apply prefix
*/

#include <unistd.h>
#include "./include/btree.h"

void btree_apply_infix(btree_t *root, int (*applyf)(void *))
{
    if (root != NULL) {
        if (root->left != NULL)
            btree_apply_infix(root->left, applyf);
        applyf(root->item);
        if (root->right != NULL)
            btree_apply_infix(root->right, applyf);
    }
}
