/*
** EPITECH PROJECT, 2021
** nb_zeros.c
** File description:
** nb zeros
*/

int nb_zeros(char *result)
{
    int i = 0;
    int nb = 0;

    while (result[i] != '\0') {
        if (result[i] == '0')
            nb++;
        i++;
    }
    return (nb);
}
