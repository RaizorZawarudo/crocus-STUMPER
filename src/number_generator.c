/*
** EPITECH PROJECT, 2021
** number_generator.c
** File description:
** number_generator
*/

#include "../include/helper.h"
#include "../include/my.h"

asciiart *number_generator(void)
{
    asciiart *ascart = malloc(sizeof(asciiart));

    ascart->zero = zero();
    ascart->one = one();
    ascart->two = two();
    ascart->three = three();
    ascart->four = four();
    ascart->five = five();
    ascart->six = six();
    ascart->seven = seven();
    ascart->eight = eight();
    ascart->nine = nine();
    return (ascart);
}

asciiart *string_gen(asciiart *ascart, char **av)
{
    for (int i = 0; av[i]; i++) {
        if (strcmp(av[i], "-n") == 0) {
            ascart->canvas_size = my_strlen(av[i + 1]);
            ascart->nb_str = strdup(av[i + 1]);
        }
    }
    return (ascart);
}

char **fill_canvas(asciiart *ascart, char **final_canvas, char *mod_str)
{
    char *cur_line = NULL;

    for (int i = 0 ; i < 5; i++) {
        for (int j = 0 ; j < ascart->canvas_size ; j++) {
            cur_line = get_cur_line(i, ascart->nb_str[j], ascart);
            cur_line = add_space(ascart->canvas_size, j, cur_line);
            if (mod_str != NULL)
                cur_line = apply_mod(mod_str, cur_line, j, ascart->nb_str);
            final_canvas[i] = strcat(final_canvas[i], cur_line);
        }
    }
    return (final_canvas);
}