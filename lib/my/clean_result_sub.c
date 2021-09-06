/*
** EPITECH PROJECT, 2021
** clean_result_sub.c
** File description:
** clean result sub
*/

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src);

char *my_revstr(char *str);

int nb_zeros(char *result);

char *clean_result_sub(char *result, int verif)
{
    int i = 0;

    if (verif == 1 && result[my_strlen(result) - 1] != '0')
        my_strcat(result, "-");
    else if (verif == 1 && result[my_strlen(result) - 1] == '0')
        result[my_strlen(result) - 1] = '-';
    my_revstr(result);
    while (result[i + 1] != '\0' && result[i] == '0')
        i++;
    return (&result[i]);
}
