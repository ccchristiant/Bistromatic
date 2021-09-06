/*
** EPITECH PROJECT, 2021
** factors_for_summands.c
** File description:
** factors for summands
*/

#include <stdlib.h>
#include "../include/my_macros.h"
#include "../include/my.h"

char *number(char **str_ptr);

char *infin_mult1(char const *str1, char const *str2);

char *infin_div1(char const *str1, char const *str2);

char *infin_mod1(char const *str1, char const *str2);

char *factors_for_summands(char **str_ptr)
{
    char *res = my_strdup(number(&str_ptr[0]));

    while ((str_ptr[0][0] == '*') || (str_ptr[0][0] == '/') ||
    (str_ptr[0][0] == '%')) {
        if (str_ptr[0][0] == '*') {
            *str_ptr = &str_ptr[0][1];
            res = my_strdup(infin_mult1(res, number(&str_ptr[0])));
        }
        if (str_ptr[0][0] == '/') {
            *str_ptr = &str_ptr[0][1];
            res = my_strdup(infin_div1(res, number(&str_ptr[0])));
        }
        if (str_ptr[0][0] == '%') {
            *str_ptr = &str_ptr[0][1];
            res = my_strdup(infin_mod1(res, number(&str_ptr[0])));
        }
    }
    return (res);
}
