/*
** EPITECH PROJECT, 2021
** infin_mod.c
** File description:
** Modulo of infinite numbers
*/

#include <unistd.h>
#include <stdlib.h>
#include "../include/my_macros.h"
#include "../include/my.h"

char *infin_sub_pos_neg(char const *str1, char const *str2);

char *infin_mult1(char const *str1, char const *str2);

void upd_rem_mod(char *off, char **rem)
{
    my_revstr(my_strcat(my_revstr(off), "-"));
    *rem = my_strdup(infin_sub_pos_neg(*rem, off));
    free(off);
}

char *do_mod(int *fin_nb_dig, int max_fin_nb_dig, char *take, char **rem)
{
    int i = 0;
    char *fact = my_strdup(my_itoa(i));
    char *off;

    if (my_strcmp(*rem, take) < 0 && *fin_nb_dig == max_fin_nb_dig)
        *fin_nb_dig -= 1;
    for (int j = 1; j < *fin_nb_dig; j++)
        my_strcat(take, "0");
    for (; ((my_strlen(infin_mult1(take, fact)) == my_strlen(*rem) &&
            my_strcmp(infin_mult1(take, fact), *rem) < 0) || (i < 10) &&
            (my_strlen(infin_mult1(take, fact)) < my_strlen(*rem))); i++) {
        fact[0] = ITOC(i);
        off = my_strdup(infin_mult1(take, fact));
    }
    if (my_strcmp(off, *rem) != 0) {
        fact[0] = ITOC(i - 2);
        off = my_strdup(infin_mult1(take, fact));
    }
    upd_rem_mod(off, rem);
    return (*rem);
}

char *start_mod(char const *str1, char const *str2, int v1, int v2)
{
    int fin = my_strlen(skip(&str1[v1])) - (my_strlen(skip(&str2[v2])) - 1);
    int max_fin = fin;
    char *take;
    char *rem = my_strdup(skip(&str1[v1]));

    for (; fin > 0; fin--) {
        if (my_strcmp(rem, "0") != 0) {
            take = malloc(sizeof(char) * (fin + 2));
            my_strcpy(take, skip(&str2[v2]));
            do_mod(&fin, max_fin, take, &rem);
        }
    }
    free(take);
    return (clean_rem(rem, v1, v2));
}

char *infin_mod2(char const *str1, char const *str2, int v1, int v2)
{
    char *str1_format;

    if (nb_zeros_const(&str2[v2]) == my_strlen(&str2[v2])) {
        write(2, "error", 5);
        return (NULL);
    }
    if (nb_zeros_const(&str1[v1]) == my_strlen(&str1[v1]))
        return ("0");
    if (my_strlen(skip(&str1[v1])) < my_strlen(skip(&str2[v2]))) {
        str1_format = my_strdup(skip(&str1[v1]));
        if (str1[0] == '-')
            my_revstr(my_strcat(my_revstr(str1_format), "-"));
        return (str1_format);
    }
    return (start_mod(str1, str2, v1, v2));
}

char *infin_mod1(char const *str1, char const *str2)
{
    int v1;
    int v2;

    if (str1 == NULL || str2 == NULL)
        return (NULL);
    v1 = (str1[0] == '-') ? 1 : 0;
    v2 = (str2[0] == '-') ? 1 : 0;
    return (infin_mod2(str1, str2, v1, v2));
}
