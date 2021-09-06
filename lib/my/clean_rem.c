/*
** EPITECH PROJECT, 2021
** clean_rem.c
** File description:
** clean rem for infin_mod
*/

int nb_zeros(char *result);

int my_strlen(char const *str);

char *my_revstr(char *str);

char *my_strcat(char *dest, char const *src);

char *clean_rem(char *rem, int v1, int v2)
{
    int i = 0;

    while (rem[i] == '0' && rem[i + 1] != '\0')
        i++;
    if (v1 == 1 && v2 == 1 || v1 == 1 && v2 == 0)
        return (my_revstr(my_strcat(my_revstr(rem), "-")));
    return (&rem[i]);
}
