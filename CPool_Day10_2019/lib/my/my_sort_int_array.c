/*
** EPITECH PROJECT, 2019
** my_sort_int_array
** File description:
** Sort int in array
*/

void my_swap(int *a, int *b);
void my_sort_int_array_swap(int *array, int j);

void my_sort_int_array(int *array, int size)
{
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            my_sort_int_array_swap(array, j);
        }
    }
}

void my_sort_int_array_swap(int *array, int j)
{
    if (array[j] > array[j+1])
        my_swap(array + j, array + j + 1);
}
