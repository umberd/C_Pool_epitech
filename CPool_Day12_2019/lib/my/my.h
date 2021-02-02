/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** every functions of libmy
*/

#ifndef MY_H_

#define MY_H_

void my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_put_nbr_recurs_mode(int nb);
void my_put_nbr_mf(void);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
int my_check_is_int(char const *str, int is_pos, int len_a, int len_b);
int dix_puiss(int dix_puissance_var);
int my_check_is_int(char const *str, int is_pos, int len_a, int len_b);
int my_check_is_int_limit(char const *str, int is_pos, int len_a, int len_b);
int my_str_to_int(int len_a, int len_b, char const *str, int is_positive);
void my_sort_int_array(int *tab, int size);
void my_sort_int_array_swap(int *array, int j);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char const *str, char const *to_find);
int check_to_find_str(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
void my_strcapitalize_words(char *str, int capitalize, int i);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
int my_show_word_array(char * const *tab);
char *my_strdup(char const *src);
int is_alpha_num(char const c);
char **my_str_to_word_array(char const *str);
int my_check_number_of_words(char const *str);
int my_str_to_word_array_len(int *len_a, int *len_b, char const *str, int i);
void my_str_to_word_a_print(char const *str, int len, int *word, char **dest);

#endif /* MY_H_ */
