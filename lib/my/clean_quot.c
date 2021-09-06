/*
** EPITECH PROJECT, 2021
** clean_quot.c
** File description:
** clean quot for infin_div
*/

int nb_zeros(char *result);

int my_strlen(char const *str);

char *my_revstr(char *str);

char *my_strcat(char *dest, char const *src);

char *clean_quot(char *quot, int v1, int v2)
{
    int i = 0;

    while (quot[i] == '0' && quot[i + 1] != '\0')
        i++;
    if (v1 == 1 && v2 == 0 || v1 == 0 && v2 == 1)
        return (my_revstr(my_strcat(my_revstr(quot), "-")));
    return (&quot[i]);
}
