/*
** EPITECH PROJECT, 2021
** zero_to_four.c
** File description:
** zero_to_four
*/

#include "../include/helper.h"
#include "../include/my.h"

char **zero()
{
    char **zero = malloc(sizeof(char *) * 5);
    
    zero[0] = strdup(" 000 ");
    zero[1] = strdup("0   0");
    zero[2] = strdup("0   0");
    zero[3] = strdup("0   0");
    zero[4] = strdup(" 000 ");
    return (zero);
}

char **one()
{
    char **one = malloc(sizeof(char *) * 5);
    
    one[0] = strdup(" 000 ");
    one[1] = strdup("0 00 ");
    one[2] = strdup("  00 ");
    one[3] = strdup("  00 ");
    one[4] = strdup(" 0000");
    return (one);
}

char **two()
{
    char **two = malloc(sizeof(char *) * 5);
    
    two[0] = strdup(" 000 ");
    two[1] = strdup("0   0");
    two[2] = strdup("   0 ");
    two[3] = strdup(" 0   ");
    two[4] = strdup("00000");
    return (two);
}

char **three()
{
    char **three = malloc(sizeof(char *) * 5);
    
    three[0] = strdup("0000 ");
    three[1] = strdup("    0");
    three[2] = strdup(" 000 ");
    three[3] = strdup("    0");
    three[4] = strdup("0000 ");
    return (three);
}

char **four()
{
    char **four = malloc(sizeof(char *) * 5);
    
    four[0] = strdup("  00 ");
    four[1] = strdup(" 0 0 ");
    four[2] = strdup("0  0 ");
    four[3] = strdup("00000");
    four[4] = strdup("   0 ");
    return (four);
}