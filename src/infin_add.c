/*
** EPITECH PROJECT, 2021
** infin_add.c
** File description:
** infin add
*/

#include <stdlib.h>
#include "../include/my_macros.h"
#include "../include/my.h"

char *infin_sub_pos_neg(char const *str1, char const *str2);

char *infin_sub_neg_pos(char const *str1, char const *str2);

void do_add(char *result, char *nbr1, char *nbr2)
{
    int res;
    int i = 0;
    int retenue = 0;

    while (nbr1[i] != '\0' && nbr2[i] != '\0') {
        res = CTOI(nbr1[i]) + CTOI(nbr2[i]) + retenue;
        result[i] = ITOC(res % 10);
        retenue = res / 10;
        i++;
    }
    while (longest(nbr1, nbr2)[i] != '\0') {
        res = CTOI(longest(nbr1, nbr2)[i]) + retenue;
        result[i] = ITOC(res % 10);
        retenue = res / 10;
        i++;
    }
    if (retenue != 0)
        result[i] = '1';
}

char *infin_add(char const *str1, char const *str2)
{
    char *result;
    int verif = (str1[0] == '-' && str2[0] == '-') ? 1 : 0;
    char *nbr1 = my_revstr(my_strdup(&str1[verif]));
    char *nbr2 = my_revstr(my_strdup(&str2[verif]));
    int len = (longest(nbr1, nbr2) == nbr1) ? my_strlen(nbr1) : my_strlen(nbr2);

    if (str1[0] != '-' && str2[0] == '-')
        return (infin_sub_pos_neg(str1, str2));
    if (str1[0] == '-' && str2[0] != '-')
        return (infin_sub_neg_pos(str1, str2));
    result = malloc(sizeof(char) * (len + verif + 2));
    if (result == NULL || nbr1 == NULL || nbr2 == NULL)
        return (NULL);
    do_add(result, nbr1, nbr2);
    result[len + verif + 1] = '\0';
    free(nbr1);
    free(nbr2);
    return (clean_result_add(result, verif));
}
