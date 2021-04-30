/*
** EPITECH PROJECT, 2021
** five_to_nine.c
** File description:
** five_to_nine
*/

#include "../include/helper.h"
#include "../include/my.h"

char **five()
{
    char **five = malloc(sizeof(char *) * 5);
    
    five[0] = strdup("00000");
    five[1] = strdup("0    ");
    five[2] = strdup("0000 ");
    five[3] = strdup("    0");
    five[4] = strdup("0000 ");
    return (five);
}

char **six()
{
    char **six = malloc(sizeof(char *) * 5);
    
    six[0] = strdup(" 000 ");
    six[1] = strdup("0    ");
    six[2] = strdup("0000 ");
    six[3] = strdup("0   0");
    six[4] = strdup(" 000 ");
    return (six);
}

char **seven()
{
    char **seven = malloc(sizeof(char *) * 5);
    
    seven[0] = strdup("00000");
    seven[1] = strdup("    0");
    seven[2] = strdup("   0 ");
    seven[3] = strdup("  0  ");
    seven[4] = strdup(" 0   ");
    return (seven);
}

char **eight()
{
    char **eight = malloc(sizeof(char *) * 5);
    
    eight[0] = strdup(" 000 ");
    eight[1] = strdup("0   0");
    eight[2] = strdup(" 000 ");
    eight[3] = strdup("0   0");
    eight[4] = strdup(" 000 ");
    return (eight);
}

char **nine()
{
    char **nine = malloc(sizeof(char *) * 5);
    
    nine[0] = strdup(" 000 ");
    nine[1] = strdup("0   0");
    nine[2] = strdup(" 0000");
    nine[3] = strdup("    0");
    nine[4] = strdup(" 000 ");
    return (nine);
}