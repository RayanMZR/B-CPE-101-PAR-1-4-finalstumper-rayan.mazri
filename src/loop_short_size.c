/*
** EPITECH PROJECT, 2022
** loop_short_size
** File description:
** finalstumper
*/

#include "../include/my.h"

void loop_short_size3(int i, char *buffer, int size_tab, int size_line)
{
    if ((my_strcmp(buffer, "B\n") == 0) || (my_strcmp(buffer, "B\nB\n") == 0)
        || (my_strcmp(buffer, "BB\n") == 0)
        || (my_strcmp(buffer, "AC\nCA\n") == 0)) {
        if (i == 0) {
            print_first_value(5, size_tab, size_line);
            i++;
        } else
            print_value(5, size_tab, size_line);
    }
}

void loop_short_size2(int i, char *buffer, int size_tab, int size_line)
{
    if ((my_strcmp(buffer, "B\n") == 0) || (my_strcmp(buffer, "B\nB\n") == 0)
        || (my_strcmp(buffer, "BB\n") == 0)
        || (my_strcmp(buffer, "AA\nCC\n") == 0)) {
        if (i == 0) {
            print_first_value(3, size_tab, size_line);
            i++;
        } else
            print_value(3, size_tab, size_line);
    }
    if ((my_strcmp(buffer, "B\n") == 0) || (my_strcmp(buffer, "B\nB\n") == 0)
        || (my_strcmp(buffer, "BB\n") == 0)
        || (my_strcmp(buffer, "AC\nAC\n") == 0)) {
        if (i == 0) {
            print_first_value(4, size_tab, size_line);
            i++;
        } else
            print_value(4, size_tab, size_line);
    }
    loop_short_size3(i, buffer, size_tab, size_line);
}

void loop_short_size(char *buffer, int size_tab, int size_line)
{
    int i = 0;
    if ((my_strcmp(buffer, "o\n") == 0) || (my_strcmp(buffer, "o\no\n") == 0)
        || (my_strcmp(buffer, "oo\n") == 0)
        || (my_strcmp(buffer, "oo\noo\n") == 0)) {
        if (i == 0) {
            print_first_value(1, size_tab, size_line);
            i++;
        } else
            print_value(1, size_tab, size_line);
    }
    if ((my_strcmp(buffer, "*\n") == 0) || (my_strcmp(buffer, "*\n*\n") == 0)
        || (my_strcmp(buffer, "**\n") == 0)
        || (my_strcmp(buffer, "/\\\n\\/\n") == 0)) {
        if (i == 0) {
            print_first_value(2, size_tab, size_line);
            i++;
        } else
            print_value(2, size_tab, size_line);
    }
    loop_short_size2(i, buffer, size_tab, size_line);
}
