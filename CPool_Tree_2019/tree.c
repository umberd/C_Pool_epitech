/*
** EPITECH PROJECT, 2019
** tree.c
** File description:
** The FireTree Project
*/

void my_putchar(char);

int Calcul_next_space(int size)
{
    if (size % 2 == 0)
        return size / 2;
    return ((size + 1) / 2);
}

void print_multiple_same_char(char c, int nb)
{
    for (int i = 0; i < nb; i++) {
        my_putchar(c);
    }
}

void print_each_leaf_tree(int size, int space, int *my_stars)
{
    int hauteur_h = (3 + size);
    int space_provision;

    space_provision = space - Calcul_next_space(size) + hauteur_h;
    if (size > 1) {
        print_each_leaf_tree(size - 1, space_provision - 1, my_stars);
        *my_stars = *my_stars - Calcul_next_space(size) - 1;
    }
    for (int i = 0; i < hauteur_h; i++) {
        print_multiple_same_char(' ', space_provision);
        print_multiple_same_char('*', *my_stars);
        my_putchar('*');
        print_multiple_same_char('*', *my_stars);
        my_putchar('\n');
        space_provision--;
        *my_stars = *my_stars + 1;
    }
}

void print_branch_tree(int my_stars)
{
    print_multiple_same_char(' ', my_stars - 1);
    my_putchar('|');
    my_putchar('\n');
}

void tree(int size)
{
    int my_stars = 0;

    if (size > 0) {
        print_each_leaf_tree(size, 0, &my_stars);
        print_branch_tree(my_stars);
    }
}
