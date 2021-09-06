/*
** EPITECH PROJECT, 2021
** my_str_to_word_array.c
** File description:
** my str to word array
*/

#include <stddef.h>
#include <stdlib.h>

int my_strlen(char const *str);

char *my_strncpy(char *dest, char const *src, int n);

int nb_sep(char const *str)
{
    int i = 0;
    int nb = 0;

    while (str[i]) {
        if (str[i] == ' ')
            nb += 1;
        i++;
    }
    return (nb);
}

char **my_str_to_word_array(char const *str)
{
    int j;
    int k = 0;
    char **tab = malloc(sizeof(char *) * (nb_sep(str) + 2));

    for (int i = 0; i < my_strlen(str); i++) {
        for (j = 0; str[i + j] && str[i + j] != ' '; j++)
            tab[k] = malloc(sizeof(char) * j);
        my_strncpy(tab[k], &str[i], j);
        i += j;
        k++;
    }
    return (tab);
}
