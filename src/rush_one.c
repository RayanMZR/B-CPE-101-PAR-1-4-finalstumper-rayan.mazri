/*
** EPITECH PROJECT, 2022
** line
** File description:
** rush1_1
*/

#include "../include/my.h"
#include <unistd.h>
#include <stdlib.h>

static char *line_horizontal(int x)
{
    char *buffer;
    buffer = malloc(sizeof(char) * (x + 1));
    if (x == 1)
        buffer[0] = 'o';
    if (x == 2) {
        buffer[0] = 'o';
        buffer[1] = 'o';
    }
    if (x > 2) {
        buffer[0] = 'o';
        int i = 0;
        for (i = 0; i < x - 2; i++)
            buffer[i + 1] = '-';
        buffer[i + 1] = 'o';
    }
    buffer[x] = '\n';
    return buffer;
}

static char *line_vertical(int x, int y)
{
    char *buffer = malloc(sizeof(char) * (y * (x + 1)));
    int i, len_tab = 0;
    if (y >= 3 && x == 1) {
        for (i = 0; len_tab < y - 2; i++, len_tab++) {
            buffer[i] = '|';
            i++;
            buffer[i] = '\n';
        }
        return 0;
    }
    for (i = 0; len_tab < y - 2; i++, len_tab++) {
        buffer[i] = '|';
        i++;
        for (int j = 0; j < x - 2; i++, j++)
            buffer[i] = ' ';
        buffer[i] = '|';
        i++;
        buffer[i] = '\n';
    }
    return buffer;
}

char *rush1_1(int x, int y)
{
    char *tab = malloc(sizeof(char) * (y * (x + 1)));
    char *tab1 = line_horizontal(x);
    char *tab2 = line_vertical(x, y);
    int i = 0;
    int j = 0;
    if (x <= 0 || y <= 0)
        return "Invalid size\n";
    if (y == 1) {
        tab = line_horizontal(x);
        return tab;
    }
    for (j = 0; tab1[j]; j++, i++)
        tab[i] = tab1[j];
    if (y >= 3)
        for (int k = 0; tab2[k]; k++, i++) {
            tab[i] = tab2[k];
        }
    for (j = 0; tab1[j]; j++, i++)
        tab[i] = tab1[j];
    return tab;
}
