/*
** EPITECH PROJECT, 2021
** summands_factors.c
** File description:
** summands that handles factors instead of numbers
*/

#include <stdlib.h>
#include "../include/my_macros.h"
#include "../include/my.h"

char *factors_for_summands(char **str_ptr);

char *summands_factors(char **str_ptr)
{
    char *res = my_strdup(factors_for_summands(&str_ptr[0]));

    while (str_ptr[0][0] != '\0')
        res = my_strdup(infin_add(res, factors_for_summands(&str_ptr[0])));
    return (res);
}
