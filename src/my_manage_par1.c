/*
** EPITECH PROJECT, 2021
** my_manage_par1.c
** File description:
** manage par part 1
*/

#include <stdio.h>
#include <stdlib.h>
#include "../include/my_macros.h"
#include "../include/my.h"

char *summands_factors(char **str_ptr);

char *expression(char *str, char *str_exp)
{
    int count1 = 0;
    int count2 = 0;
    int pos_1 = 0;
    int pos_2 = 0;

    str_exp = malloc(sizeof(char) * my_strlen(str));
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '(') {
            pos_1 = i;
            count1++;
        }
        if (str[i] == ')') {
            pos_2 = i;
            count2++;
            if (count2 == 1)
                break;
        }
    }
    str_exp = my_copy(str, pos_1, pos_2);
    return (str_exp);
}

char *my_final_result(char *str, char *nb, char *result, char *exp)
{
    char *str_first = my_get_first(str, exp);
    char *str_last = my_get_last(str);
    int len_f = my_strlen(str_first);
    int len_l = my_strlen(str_last);
    int len_nb = my_strlen(nb);

    result = malloc(sizeof(char) * (len_f + len_nb + len_l + 1));
    result[0] = '\0';
    result = my_strcat(result, str_first);
    result = my_strcat(result, nb);
    result = my_strcat(result, str_last);
    return (result);
}

char *get_wexp(char *str)
{
    char *str_exp;
    char *str1 = expression(str, str_exp);
    char **str_ptr = malloc(sizeof(char *) * 2);
    char *nb;
    char *result;

    str_ptr[0] = my_strdup(str1);
    nb = my_strdup(summands_factors(&str_ptr[0]));
    return (my_final_result(str, nb, result, str1));
}

int nb_parentheses(char *str)
{
    int i = 0;
    int nb = 0;

    for (; str[i] != '\0'; i++) {
        if (str[i] == '(')
            nb++;
    }
    return (nb);
}
