/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** contains the prototypes of all the functions exposed by your libmy.a
*/

void my_putchar(char c);
char *my_strstr(char *str, char const *to_find);
int my_isneg(int n);
int my_strcmp(char const *s1, char const *s2);
int my_put_nbr(int nb);
int my_strncmp(char const *s1, char const *s2, int n);
void my_swap(int *a, int *b);
char *my_strupcase(char *str);
int my_putstr(char const *str);
char *my_strlowcase(char *str);
int my_strlen(char const *str);
char *my_strcapitalize(char *str);
int my_getnbr(char const *str);
int my_str_isalpha(char const *str);
void my_sort_int_array(int *tab, int size);
int my_str_isnum(char const *str);
int my_compute_power_rec(int nb, int p);
int my_str_islower(char const *str);
int my_compute_square_root(int nb);
int my_str_isupper(char const *str);
int my_is_prime(int nb);
int my_str_isprintable(char const *str);
int my_find_prime_sup(int nb);
int my_showstr(char const *str);
char *my_strcpy(char *dest, char const *src);
int my_showmem(char const *str, int size);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strcat(char *dest, char const *src);
char *my_revstr(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_show_word_array(char * const *tab);
char *my_strdup(char const *src);
char **my_str_to_word_array(char const *str);
int strlen_special(char *const *tab);
int d_or_l(char c);
int nb_words(char const *str);
void str_swap(char *str1[], char *str2[]);
char *longest(char *nbr1, char *nbr2);
char *clean_result_add(char *result, int verif);
char *clean_result_sub(char *result, int verif);
int nb_zeros(char *result);
void *do_sub(char *result, char *nbr1, char *nbr2);
char *infin_add(char const *str1, char const *str2);
char **my_str_to_word_array_delim(char const *str, char const sep);
char *my_itoa(int nb);
char *my_get_first(char *str, char *exp);
char *expression(char *str, char *str_exp);
char *my_copy(char *str, int pos_1, int pos_2);
char *my_get_last(char *str);
char *my_memset(char *str, char a, int b);
char *clean_quot(char *quot, int v1, int v2);
char *clean_rem(char *rem, int v1, int v2);
char *skip(char const *str);
int nb_zeros_const(char const *str);
int check_base(char const *base);
int check_ops(char const *ops);
int my_error_par(char *str);
int my_error_par_bis(char *str);
int my_check_expr(char *str, char *base, char *ops);
int my_op_base(char *str, char *base, char *ops);
