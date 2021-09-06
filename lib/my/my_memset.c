/*
** EPITECH PROJECT, 2021
** my_memset.c
** File description:
** nherbal
*/

char *my_memset(char *str, char a, int b)
{
    int i = 0;

    while (i != b){
        str[i] = a;
        i++;
    }
    return str;
}
