/*
** EPITECH PROJECT, 2019
** my_rev_params
** File description:
** print all params
*/

int my_putstr(char const *str);
void my_putchar(char c);

int main(int argc, char **argv)
{
    for (int i = argc - 1; i >= 0; i--) {
        my_putstr(argv[i]);
        my_putchar('\n');
    }
    return 0;
}
