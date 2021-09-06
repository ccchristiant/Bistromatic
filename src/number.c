/*
** EPITECH PROJECT, 2021
** number.c
** File description:
** number
*/

#include <stdlib.h>
#include "../include/my_macros.h"
#include "../include/my.h"

char *number(char **str_ptr)
{
    int i = 0;
    int j = 0;
    int offset;
    char *nb;
    int sign = 1;

    for (; str_ptr[0][i] == '+' || str_ptr[0][i] == '-'; i++)
        sign = (str_ptr[0][i] == '-') ? sign *= -1 : sign;
    while ((str_ptr[0][i + j] >= '0') && (str_ptr[0][i + j] <= '9') &&
    (str_ptr[0][i] != '\0'))
        j++;
    nb = malloc(sizeof(char) * j + 2);
    if (sign == -1)
        nb[0] = '-';
    offset = (sign == -1) ? 1 : 0;
    nb[0 + offset] = '\0';
    my_strncat(nb, &str_ptr[0][i], j);
    *str_ptr = &str_ptr[0][i + j];
    return (nb);
}
