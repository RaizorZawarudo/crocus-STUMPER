/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "../include/helper.h"
#include "../include/my.h"

int check_second_arg(char first_arg_type, char second_arg_type, \
                                                char *second_arg)
{
    if ((first_arg_type == 'n' && second_arg_type != 's') ||
        (first_arg_type == 's' && second_arg_type != 'n')) {
        write(2, "Please use the correct flags\n", 29);
        return (0);
        }
    if (second_arg_type == 'n' && !my_str_isnum(second_arg)) {
        write(2, "Please put a number after -n\n", 29);
        return (0);
    }
    else 
        return (1);
}

char check_first_arg(char arg_type, char *av_two)
{
    if (arg_type == 'n' && my_str_isnum(av_two))
        return ('n');
    else if (arg_type == 's')
        return ('s');
    else {
        write(2, "Please check strings & flags\n", 29);
        return ('x');
    }
}

int error_management(int ac, char **av)
{
    char first_arg;

    if (ac != 5 && ac != 3)
        return (0);
    if (av[1][1] == 's' || av[1][1] == 'n') {
        first_arg = check_first_arg(av[1][1], av[2]);
        if (first_arg == 'x')
            return (0);
    }
    else
        return (0);
    if (ac == 3 && first_arg != 'x')
        return (1);
    return (check_second_arg(first_arg, av[3][1], av[4]));
}

char **create_canvas(int canvas_size)
{
    char **canvas = malloc(sizeof(char *) * 5);
    for (int i = 0 ; i  < 5 ; i++) {
        canvas[i] = malloc(sizeof(char) * \
        ((canvas_size * 5) + canvas_size - 2));
    }
    return (canvas);
}

int main (int ac, char **av)
{
    asciiart *ascart = malloc(sizeof(asciiart));
    char *mod_str = NULL;
    char **final_canvas = NULL;

    if (!error_management(ac, av))
        return (84);
    ascart = number_generator();
    ascart = string_gen(ascart, av);
    for (int i = 0; av[i]; i++) {
        if (strcmp(av[i], "-s") == 0)
            mod_str = strdup(av[i + 1]);
    }
    final_canvas = create_canvas(ascart->canvas_size);
    final_canvas = fill_canvas(ascart, final_canvas, mod_str);
    print_canvas(final_canvas);
    return 0;
}