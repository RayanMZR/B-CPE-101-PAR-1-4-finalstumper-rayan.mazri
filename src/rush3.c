/*
** EPITECH PROJECT, 2022
** rush3
** File description:
** final stumper
*/

#include "../include/my.h"

void print_first_value(int nb, int size_tab, int size_line)
{
    my_putstr("[rush1-");
    my_put_nbr(nb);
    my_putstr("] ");
    my_put_nbr(size_line);
    my_putchar(' ');
    my_put_nbr(size_tab);
}

void print_value(int nb, int size_tab, int size_line)
{
    my_putstr(" || ");
    my_putstr("[rush1-");
    my_put_nbr(nb);
    my_putstr("] ");
    my_put_nbr(size_line);
    my_putchar(' ');
    my_put_nbr(size_tab);
}

void print_func2(int i, int size_tab, int size_line, char *buffer)
{
    if (my_strcmp(buffer, rush1_3(size_line, size_tab)) == 0) {
        if (i == 0) {
            print_first_value(3, size_tab, size_line);
            i++;
        } else
            print_value(3, size_tab, size_line);
    }
    if (my_strcmp(buffer, rush1_4(size_line, size_tab)) == 0 && i == 0) {
        if (i == 0) {
            print_first_value(4, size_tab, size_line);
            i++;
        } else
            print_value(4, size_tab, size_line);
    }
    if (my_strcmp(buffer, rush1_5(size_line, size_tab)) == 0 && i == 0) {
        if (i == 0) {
            print_first_value(5, size_tab, size_line);
        } else
            print_value(5, size_tab, size_line);
    }
}

void print_func1(int size_tab, int size_line, char *buffer)
{
    int i = 0;
    if (my_strcmp(buffer, rush1_1(size_line, size_tab)) == 0) {
        if (i == 0) {
            print_first_value(1, size_tab, size_line);
            i++;
        } else
            print_value(1, size_tab, size_line);
    }
    if (my_strcmp(buffer, rush1_2(size_line, size_tab)) == 0) {
        if (i == 0) {
            print_first_value(2, size_tab, size_line);
            i++;
        } else
            print_value(2, size_tab, size_line);
    }
    print_func2(i ,size_tab, size_line, buffer);
}

void rush3(char *buffer)
{
    int size_tab = 0;
    int size_line = 0;
    for (int i = 0; buffer[i]; i++)
        if (buffer[i] == '\n')
            size_tab++;
    for (int i = 0; buffer[i] != '\n'; i++)
        size_line++;
    if (size_tab > 2 && size_line > 2)
        print_func1(size_tab, size_line, buffer);
    else if (size_tab <= 2 && size_line <= 2)
        loop_short_size(buffer, size_tab, size_line);
    my_putchar('\n');
}
