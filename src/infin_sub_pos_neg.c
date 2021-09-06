/*
** EPITECH PROJECT, 2021
** infin_sub_pos_neg.c
** File description:
** infin sub pos neg
*/

#include <stdlib.h>
#include "../include/my_macros.h"
#include "../include/my.h"

char *infin_sub_pos_neg(char const *str1, char const *str2)
{
    char *result;
    char *nbr1 = my_strdup(str1);
    char *nbr2 = my_strdup(&str2[1]);
    int len = (longest(nbr1, nbr2) == nbr1) ? my_strlen(nbr1) : my_strlen(nbr2);
    int verif = 0;

    if (((str2[0] == '-' && my_strlen(nbr1) < my_strlen(nbr2)) ||
    (my_strlen(nbr1) <= my_strlen(nbr2) && my_strcmp(nbr1, nbr2) < 0))) {
        str_swap(&nbr1, &nbr2);
        verif = 1;
    }
    result = malloc(sizeof(char) * (len + verif + 1));
    if (result == NULL || nbr1 == NULL || nbr2 == NULL)
        return (NULL);
    do_sub(result, my_revstr(nbr1), my_revstr(nbr2));
    result[len + verif] = '\0';
    free(nbr1);
    free(nbr2);
    return (clean_result_sub(result, verif));
}
