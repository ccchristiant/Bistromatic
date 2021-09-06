/*
** EPITECH PROJECT, 2021
** do_sub.c
** File description:
** do sub
*/

#include <stddef.h>
#include "../../include/my_macros.h"

char *longest(char *nbr1, char *nbr2);

void nbr1_idx_modif(char *nbr1, int i)
{
    if (nbr1[i + 1] != '0')
        nbr1[i + 1] -= 1;
    else {
        nbr1[i + 1] = '9';
        nbr1[i + 2] -= 1;
    }
}

void *do_sub(char *result, char *nbr1, char *nbr2)
{
    int res;
    int i = 0;
    int retenue = 0;

    for (; nbr1[i] != '\0' && nbr2[i] != '\0'; i++) {
        if (CTOI(nbr1[i]) < CTOI(nbr2[i])) {
            res = CTOI(nbr1[i]) + 10 - CTOI(nbr2[i]) + retenue;
            nbr1_idx_modif(nbr1, i);
        }
        else
            res = CTOI(nbr1[i]) - CTOI(nbr2[i]) + retenue;
        result[i] = ITOC(res % 10);
        retenue = res / 10;
    }
    for (; nbr1[i] != '\0'; i++) {
        res = CTOI(nbr1[i]) + retenue;
        result[i] = ITOC(res);
        retenue = res / 10;
    }
}
