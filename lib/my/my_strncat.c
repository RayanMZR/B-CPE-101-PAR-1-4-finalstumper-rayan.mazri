/*
** EPITECH PROJECT, 2022
** my_strncat
** File description:
** day7
*/

int my_strlen(char *str);

char *my_strncat(char *dest, char const *src, int nb)
{
    int i;
    int len = my_strlen(dest);

    for (i = 0; src[i] != '\0' && i < nb; i++)
        dest[len + i] = src[i];
    dest[len + i] = '\0';
    return dest;
}
