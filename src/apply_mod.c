/*
** EPITECH PROJECT, 2021
** B-CPE-210-BER-2-1-stumper3-eduard.popp
** File description:
** apply_mod
*/

#include "../include/helper.h"
#include "../include/my.h"

char *add_space(int canvas_size, int j, char *cur_line)
{
    char *cur_spaced_line = malloc(sizeof(char) * 6);

    cur_spaced_line = strcpy(cur_spaced_line, cur_line);
    if (j < canvas_size - 1) {
        strncat(cur_spaced_line, " ", 5);
        return (cur_spaced_line);
    } else {
        return (cur_spaced_line);
    }
}

int get_mod_j(int j, int len, char *nb_str)
{
    int b = 0;

    if (j == 0)
        return (0);
    b = (nb_str[j] - '0') % len;
    return (b);
}

char *apply_mod(char *mod_str, char* cur_line, int j, char *nb_str)
{
    int len = my_strlen(mod_str);

    if (j > (my_strlen(mod_str) -1))
        return cur_line;
    for (int i = 0 ; i < 5; i++) {
        if (cur_line[i] == '0') {
            cur_line[i] = mod_str[get_mod_j(j, len, nb_str)];
        }
    }
    return (cur_line);
}

void print_canvas(char **final_canvas)
{
    for (int x = 0; x < 5; x++) {
        my_putstr(final_canvas[x]);
        my_putchar('\n');
    }
}