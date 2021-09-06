/*
** EPITECH PROJECT, 2021
** manage_par2.c
** File description:
** manage par part 2
*/

#include <stdlib.h>
#include <stdio.h>
#include "../include/my_macros.h"
#include "../include/my.h"

char *my_copy(char *str, int pos_1, int pos_2)
{
    int i = 0;
    char *str_cp = malloc(sizeof(char) * my_strlen(str));

    for (int j = pos_1 + 1; j != pos_2; j++, i++) {
        str_cp[i] = str[j];
    }
    str_cp[i] = '\0';
    return (str_cp);
}

char *my_get_first(char *str, char *exp)
{
    int i;
    char *str_first = malloc(sizeof(char) * my_strlen(str));

    for (i = 0; str[i] != '\0'; i++) {
        str_first[i] = str[i];
        if (str[i + my_strlen(exp) + 1] == ')')
            break;
    }
    str_first[i] = '\0';
    return (str_first);
}

char *my_get_last(char *str)
{
    int i;
    int j = 0;
    int count = 0;
    char *str_last = malloc(sizeof(char) * my_strlen(str));

    for (i = 0; str[i] != '\0'; i++) {
        if (i > 0 && str[i - 1] == ')') {
            count = 1;
        }
        if (count == 1) {
            str_last[j] = str[i];
            j++;
        }
    }
    str_last[j] = '\0';
    return (str_last);
}
