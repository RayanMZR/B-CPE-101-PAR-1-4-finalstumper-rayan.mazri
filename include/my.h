/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** day9
*/

#ifndef __MY_H__
    #define __MY_H__

    #include <unistd.h>
    #define BUFF_SIZE (5000)

void rush3(char *buffer);
char *rush1_1(int x, int y);
char *rush1_2(int x, int y);
char *rush1_3(int x, int y);
char *rush1_4(int x, int y);
char *rush1_5(int x, int y);
void loop_short_size(char *buffer, int size_tab, int size_line);
void print_value(int nb, int size_tab, int size_line);
void print_first_value(int nb, int size_tab, int size_line);
void my_putchar(char c);
void my_putstr(char *str);
int my_put_nbr(int nb);
int my_strcmp(char const *s1, char const *s2);

#endif
