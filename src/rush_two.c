/*
** EPITECH PROJECT, 2022
** line
** File description:
** rush2
*/

#include "../include/my.h"
#include <unistd.h>
#include <stdlib.h>

static char *line_horizontal_top(int x, int y)
{
    char *buffer = malloc(sizeof(char) * (y * (x + 1)) + 1);
    int i = 0;
    if (x == 1 || y == 1) {
        for (; i < x; i++)
            buffer[i] = '*';
        i++;
    }
    if (x > 1 && y > 1) {
        buffer[i] = '/';
        i++;
        for (int k = 0; k < x - 2; k++, i++)
            buffer[i] = '*';
        buffer[i] = '\\';
        i++;
    }
    buffer[i] = '\n';
    return buffer;
}

static char *line_horizontal_down(int x, int y)
{
    char *buffer = malloc(sizeof(char) * (y * (x + 1)));
    int i = 0;
    if (x == 1 || y == 1) {
        for (; i < x; i++)
            buffer[i] = '*';
        i++;
    }
    if (x > 1 && y > 1) {
        buffer[i] = '\\';
        i++;
        for (int k = 0; k < x - 2; k++, i++)
            buffer[i] = '*';
        buffer[i] = '/';
        i++;
    }
    buffer[i] = '\n';
    return buffer;
}

static char *line_vertical(int x, int y)
{
    char *buffer = malloc(sizeof(char) * (y * (x + 1)));
    int i = 0;
    if (y >= 3 && x == 1) {
        for (int j = 0; j < y - 2; j++, i++) {
            buffer[i] = '*';
            i++;
            buffer[i] = '\n';
        }
        return 0;
    }
    for (int k = 0; k < y - 2; k++, i++) {
        buffer[i] = '*';
        i++;
        for (int l = 0; l < x - 2; l++, i++)
            buffer[i] = ' ';
        buffer[i] = '*';
        i++;
        buffer[i] = '\n';
    }
    return buffer;
}

char *rush1_2(int x, int y)
{
    char *tab = malloc(sizeof(char) * (y * (x + 1)));
    char *tab1 = line_horizontal_top(x, y);
    char *tab2 = line_vertical(x, y);
    char *tab3 = line_horizontal_down(x, y);
    int i = 0;
    int j = 0;
    if (x <= 0 || y <= 0)
        return "Invalid size\n";
    if (y == 1)
        return line_horizontal_top(x, y);
    for (j = 0; tab1[j]; j++, i++)
        tab[i] = tab1[j];
    if (y >= 3)
        for (int k = 0; tab2[k]; k++, i++) {
            tab[i] = tab2[k];
        }
    for (j = 0; tab3[j]; j++, i++)
        tab[i] = tab3[j];
    return tab;
}
/*
int main()
{
    int x = 1;
    int y = 2;
    printf("%s", rush1_2(x, y));
}
*/
