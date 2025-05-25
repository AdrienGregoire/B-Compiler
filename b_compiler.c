/*
** SOLO PROJECT, 2025
** b_compiler
** File description:
** main file
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include/b_compiler.h"

int main(int ac, char **av)
{
    char *code;
    size_t len = 0;
    size_t capacity = 1024;

    if (ac != 2)
        return 84;
    code = read_file(av[1], len, capacity);
    printf("%s", code);
    free(code);
    return 0;
}
