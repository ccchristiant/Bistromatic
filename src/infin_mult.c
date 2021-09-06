/*
** EPITECH PROJECT, 2021
** infin_mult.c
** File description:
** infin mult
*/

#include <stdio.h>
#include <stdlib.h>
#include "../include/my_macros.h"
#include "../include/my.h"

char *clean_result_mult(char *result, int v1, int v2)
{
    int i = 0;

    my_revstr(result);
    while (result[i] == '0' && result[i + 1] != '\0')
        i++;
    if (v1 == 1 && v2 == 0 || v1 == 0 && v2 == 1)
        return (my_revstr(my_strcat(my_revstr(&result[i]), "-")));
    return (&result[i]);
}

char *do_mult2(char *result, char *nbr1, char *nbr2)
{
    int res;
    int i = 0;
    int a = 0;

    for (i = 0; nbr1[i] != '\0'; i++) {
        for (a = 0; nbr2[a] != '\0'; a++) {
            res = CTOI(nbr1[i]) * CTOI(nbr2[a]) + CTOI(result[i + a]);
            result[i + a] = ITOC(res % 10);
            result[i + a + 1] = ITOC(CTOI(result[a + i + 1]) + res / 10);
        }
    }
    return result;
}

char *infin_mult2(char const *str1, char const *str2, int v1, int v2)
{
    char *result;
    char *nbr1 = my_strdup(skip(&str1[v1]));
    char *nbr2 = my_strdup(skip(&str2[v2]));
    int len = my_strlen(nbr1) + my_strlen(nbr2);

    result = malloc(sizeof(char) * len + 2);
    if (result == NULL)
        return NULL;
    if (nb_zeros(nbr1) == my_strlen(nbr1) || nb_zeros(nbr2) == my_strlen(nbr2))
        return ("0");
    my_memset(result, '0', len);
    do_mult2(result, my_revstr(nbr1), my_revstr(nbr2));
    result[len] = '\0';
    free(nbr1);
    free(nbr2);
    return (clean_result_mult(result, v1, v2));
}

char *infin_mult1(char const *str1, char const *str2)
{
    int v1;
    int v2;

    if (str1 == NULL || str2 == NULL)
        return (NULL);
    v1 = (str1[0] == '-') ? 1 : 0;
    v2 = (str2[0] == '-') ? 1 : 0;
    return (infin_mult2(str1, str2, v1, v2));
}
