/*
** EPITECH PROJECT, 2020
** helper.h
** File description:
** header file containing prototypes and definitions from all project files
*/

#ifndef HELPER_H_
#define HELPER_H_

typedef struct asciiart_s {
    char **zero;
    char **one;
    char **two;
    char **three;
    char **four;
    char **five;
    char **six;
    char **seven;
    char **eight;
    char **nine;
    char *nb_str;
    int canvas_size;
} asciiart;

int check_args(char **av);

asciiart *number_generator(void);

char *apply_mod(char *mod_str, char* cur_line, int j, char *nb_str);

// replace empty params with void ! dont forget!!!!
char **zero(void);

char **one(void);

char **two(void);

char **three(void);

char **four(void);

char **five(void);

char **six(void);

char **seven(void);

char **eight(void);

char **nine(void);

char *get_cur_line(int i, char j, asciiart *ascart);

char *add_space(int canvas_size, int j, char *cur_line);

asciiart *string_gen(asciiart *ascart, char **av);

char **fill_canvas(asciiart *ascart, char **final_canvas, char *mod_str);

void print_canvas(char **final_canvas);

#endif /* !HELPER_H_ */
