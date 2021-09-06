/*
** EPITECH PROJECT, 2021
** my_eval_expr_main.c
** File description:
** THE MAIN
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "../include/my_macros.h"
#include "../include/my.h"

int nb_parentheses(char *str);

char *get_wexp(char *str);

char *summands_factors(char **str_ptr);

int info_bistro(int ac, char **av)
{
    if (ac == 2 && my_strcmp(av[1], "-h") == 0) {
        my_putstr("USAGE\n");
        my_putstr(av[0]);
        my_putstr(" base operators size_read\n\n");
        my_putstr("DESCRIPTION\n");
        my_putstr("- base: all the symbols of the base\n");
        my_putstr("- operators: the symbols for the parentheses ");
        my_putstr("and the 5 operators\n");
        my_putstr("- size_read: number of characters to be read\n");
        return (0);
    }
    if (ac != 4) {
        my_putstr("Usage: ");
        my_putstr(av[0]);
        my_putstr(" base ops\"()+-*/%\" exp_len");
        return (84);
    }
}

int my_gestion_error(char *str, char *ops, char *base)
{
    if (my_error_par(str) == 84) {
        my_putstr("syntax error");
        return (84);
    }
    if (my_error_par_bis(str) == 84) {
        my_putstr("syntax error");
        return (84);
    }
    if (check_base(base) == 84 || check_ops(ops) == 84)
        return (84);
    if (my_check_expr(str, base, ops) == 84) {
        my_putstr("syntax error");
        return (84);
    }
    if (my_op_base(str, base, ops) == 84) {
        my_putstr("syntax error");
        return (84);
    }
    return (0);
}

char *eval_expr(char const *str)
{
    char *str_cpy = my_strdup(str);
    int i = 0;
    int nb_parents = nb_parentheses(str_cpy);
    char **str_ptr = malloc(sizeof(char *) * 2);

    while (i < nb_parents) {
        str_cpy = get_wexp(str_cpy);
        i++;
    }
    str_ptr[0] = my_strdup(str_cpy);
    return (summands_factors(&str_ptr[0]));
}

char *get_expr(unsigned int size)
{
    char *expr;

    if (size <= 0) {
        my_putstr("syntax error");
        return (NULL);
    }
    if ((expr = malloc(size + 1)) == NULL) {
        my_putstr("syntax error");
        return (NULL);
    }
    if (read(0, expr, size) != size) {
        my_putstr("syntax error");
        return (NULL);
    }
    expr[size] = 0;
    return (expr);
}

int  main(int ac, char **av)
{
    unsigned int size;
    char *expr;

    if (ac == 4) {
        size = my_getnbr(av[3]);
        expr = get_expr(size);
        if (expr == NULL || my_gestion_error(expr, av[2], av[1]) == 84)
            return (84);
        if (eval_expr(expr) != NULL) {
            if (my_check_expr(eval_expr(expr), av[1], av[2]) == 0) {
                my_putstr(eval_expr(expr));
                return (0);
            }
            my_putstr("syntax error");
        }
    }
    if (info_bistro(ac, av) == 0)
        return (0);
    return (84);
}
