/*
** EPITECH PROJECT, 2021
** my_errors_eval_expr2.c
** File description:
** Error handling for eval expr
*/

#include "../include/my.h"

int check_base(char const *base)
{
    int i = 0;
    int j;

    for (; base[i + 1] != '\0'; i++) {
        for (j = i + 1; base[j] != '\0'; j++) {
            if (base[i] == base[j]) {
                my_putstr("syntax error");
                return (84);
            }
        }
    }
    return (0);
}

int check_ops(char const *ops)
{
    if (my_strlen(ops) != 7) {
        my_putstr("syntax error");
        return (84);
    }
    return (0);
}
