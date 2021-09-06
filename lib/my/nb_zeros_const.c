/*
** EPITECH PROJECT, 2021
** nb_zeros_const.c
** File description:
** nb zeros with a char const in parameter
*/

int nb_zeros_const(char const *str)
{
    int i = 0;
    int nb = 0;

    while (str[i] != '\0') {
        if (str[i] == '0')
            nb++;
        i++;
    }
    return (nb);
}
