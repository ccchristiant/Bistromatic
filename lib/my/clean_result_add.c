/*
** EPITECH PROJECT, 2021
** clean_result_add.c
** File description:
** clean result add
*/

#include "../../include/my_macros.h"

char *my_revstr(char *str);

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src);

char *clean_result_add(char *result, int verif)
{
    int i = 0;

    if (verif == 1)
        my_strcat(result, "-");
    my_revstr(result);
    while (result[i + 1] != '\0' && result[i] == '0')
        i++;
    return (&result[i]);
}
