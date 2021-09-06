/*
** EPITECH PROJECT, 2021
** my_convert_base.c
** File description:
** nherbal
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "include/my.h"
#include "include/my_macros.h"

char *infin_mod1(char *str1, char *str2);

char *infin_div1(char *str1, char *str2);

char *convert_base(char const *str, char const *base)
{
    char *convert = malloc(sizeof(char) * my_strlen(str) * my_strlen(str) + 4);
    char *x = my_strdup(str);
    char *y = my_itoa(my_strlen(base));
    int i;

    for (i = 0; x[0] != '0'; i++) {
        convert[i] = base[my_getnbr(infin_mod1(x, y))];
        x = my_strdup(infin_div1(x, y));
    }
    convert[i] = '\0';
    return my_revstr(convert);
}

char *convert_base_to_ten(char *str, char *base)
{
    char *convert = malloc(sizeof(char) * my_strlen(str) * 2);
    char *str2 = my_revstr(my_strdup(str));
    int res = 0;
    int a;
    int b;
    int power = 0;

    for (a = 0; str[a] != '\0'; a++) {
        for (b = 0; base[b] != '\0'; b++) {
            if (str2[a] == base[b]) {
                res = b * my_compute_power_rec(my_strlen(base), power) + res;
                power++;
            }
        }
    }
    convert = my_itoa(res);
    printf("convert == %s\n", convert);
    return convert_base(convert, base);
}

int check_error(char *str, char *base)
{
    int a;
    int b;
    int cpt;

    for (a = 0; a < my_strlen(base) - 1; a++) {
        for (b = a + 1; base[b] != '\0'; b++) {
            if (base[a] == base[b])
                return 1;
        }
    }
    for (a = 0; str[a] != '\0'; a++) {
        cpt = 0;
        for (b = 0; base[b] != '\0'; b++) {
            if (str[a] == base[b])
                cpt = 1;
        }
        if (cpt == 0)
            return 1;
    }
    return 0;
}

int main(int ac, char **av)
{
    if (check_error(av[1], av[2]) == 1) {
        return 84;
    }
    printf("%s\n", convert_base_to_ten(av[1], av[2]));
    return 0;
}
