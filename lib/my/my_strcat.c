/*
** EPITECH PROJECT, 2022
** my_strcat
** File description:
** day7
*/

int my_strlen(char *str);

char *my_strcat(char *dest, char const *src)
{
    int i;
    int len = my_strlen(dest);

    for (i = 0; src[i] != '\0'; i++)
        dest[len + i] = src[i];
    dest[len + i] = '\0';
    return dest;
}
