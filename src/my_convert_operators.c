/*
** EPITECH PROJECT, 2021
** my_convert_operators.c
** File description:
** nherbal
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "include/my.h"
#include "include/my_macros.h"

char *convert_operator(char *str, char *operator_base)
{
    char *operator = "()+-*/%";
    int a;
    int b;

    for (a = 0; operator[a] != '\0'; a++) {
        for (b = 0; str[b] != '\0'; b++) {
            if (str[b] == operator_base[a])
                str[b] = operator[a];
        }
    }
    return str;
}

int check_operator_base(char *operator_base)
{
    int a;
    int b;

    if (my_strlen(operator_base) != 7)
        return 1;
    for (a = 0; a < my_strlen(operator_base) - 1; a++) {
        for (b = a + 1; operator_base[b] != '\0'; b++) {
            if (operator_base[a] == operator_base[b])
                return 1;
        }
    }
    return 0;
}

int main(int ac, char **av)
{
    if (check_operator_base(av[2]) == 1)
        return 84;
    printf("%s\n", convert_operator(av[1], av[2]));
}
