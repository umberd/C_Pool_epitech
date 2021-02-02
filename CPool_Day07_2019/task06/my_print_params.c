/*
** EPITECH PROJECT, 2019
** my_sort_params
** File description:
** print all params
*/

int my_putstr(char const *str);
void my_putchar(char c);
void my_sort_str_array_swap(char **array, int j);
int my_strcmp(char const *, char const *);

void my_swap_str(char **str_one, char **str_two)
{
    char *swap;

    swap = *str_one;
    *str_one = *str_two;
    *str_two = swap;
}

int main(int argc, char **argv)
{
    for (int i = 0; i < argc - 1; i++) {
        for (int j = 0; j < argc - i - 1; j++) {
            my_sort_str_array_swap(argv, j);
        }
    }
    for (int i = 0; i < argc; i++) {
        my_putstr(argv[i]);
        my_putchar('\n');
    }
    return 0;
}

void my_sort_str_array_swap(char **array, int j)
{
    if (my_strcmp(array[j], array[j+1]) > 0)
        my_swap_str(array + j, array + j + 1);
}
