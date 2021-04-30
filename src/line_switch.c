/*
** EPITECH PROJECT, 2021
** line_switch.c
** File description:
** switch condition for the line
*/

#include "../include/helper.h"
#include "../include/my.h"

char *get_line_six_nine(char j, int i, asciiart *ascart, char *cur_line)
{
    switch (j)
    {
        case '6':
            cur_line = strdup(ascart->six[i]);
            return (cur_line);
            break;
        case '7':
            cur_line = strdup(ascart->seven[i]);
            return (cur_line);
            break;
        case '8':
            cur_line = strdup(ascart->eight[i]);
            return (cur_line);
            break;
        case '9':
            cur_line = strdup(ascart->nine[i]);
            return(cur_line);
            break;
    }
    return (cur_line);
}

char *get_cur_line_three_five(char j, int i, asciiart *ascart, char *cur_line)
{
    switch (j)
    {
        case '3':
            cur_line = strdup(ascart->three[i]);
            return (cur_line);
            break;
        case '4':
            cur_line = strdup(ascart->four[i]);
            return (cur_line);
            break;
        case '5':
            cur_line = strdup(ascart->five[i]);
            return (cur_line);
            break;
        default:
            cur_line = get_line_six_nine(j, i, ascart, cur_line);
            return (cur_line);
    }
}

char *get_cur_line(int i, char j, asciiart *ascart)
{
    char *cur_line = NULL;

    switch (j)
    {
        case '0':
            cur_line = strdup(ascart->zero[i]);
            return (cur_line);
            break;
        case '1':
            cur_line = strdup(ascart->one[i]);
            return (cur_line);
            break;
        case '2':
            cur_line = strdup(ascart->two[i]);
            return (cur_line);
            break;
        default:
            cur_line = get_cur_line_three_five(j, i, ascart, cur_line);
            return (cur_line);
    }
}