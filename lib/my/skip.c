/*
** EPITECH PROJECT, 2021
** skip.c
** File description:
** skip zeros for infin_div and infin_mod
*/

char *my_strdup(char const *src);

char *skip(char const *str)
{
    int i = 0;
    char *str_cpy = my_strdup(str);

    while (str_cpy[i] == '0' && str_cpy[i + 1] != '\0')
        i++;
    return (&str_cpy[i]);
}
