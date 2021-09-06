/*
** EPITECH PROJECT, 2021
** my_errors_eval_expr.c
** File description:
** Error handling for eval_expr
*/

#include "../include/my.h"

int my_error_par(char *str)
{
    int count1 = 0;
    int count2 = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '(')
            count1++;
        if (str[i] == ')')
            count2++;
    }
    if (count1 == count2)
        return (0);
    return (84);
}

int my_error_par_bis(char *str)
{
    int len = my_strlen(str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '(' && (str[i - 1] >= 48 && str[i - 1] <= 57) && i > 0)
            return (84);
        if (str[i] == ')' && (str[i + 1] >= 48 && str[i + 1] <= 57) && i < len)
            return (84);
    }
    return (0);
}

int my_check_expr(char *str, char *base, char *ops)
{
    int count = 0;
    int count2 = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        for (int j = 0; base[j] != '\0'; j++) {
            if (str[i] == base[j])
                count++;
        }
    }
    for (int i = 0; str[i] != '\0'; i++) {
        for (int j = 0; ops[j] != '\0'; j++) {
            if (str[i] == ops[j])
                count2++;
        }
    }
    if (my_strlen(str) - count2 != count)
        return (84);
    else
        return (0);
}

int my_op_base(char *str, char *base, char *ops)
{
    int count = 0;

    for (int i = 0; base[i] != '\0'; i++) {
        for (int j = 0; ops[j] != '\0'; j++) {
            if (base[i] == ops[j])
                count++;
        }
    }
    if (count == 0)
        return (0);
    else
        return (84);
}
