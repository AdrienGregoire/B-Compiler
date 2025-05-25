/*
** SOLO PROJECT, 2025
** b_compiler.h
** File description:
** b_compiler.h
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef B_COMPILER_H_
    #define B_COMPILER_H_
    #define SUCCESS 0
    #define EXIT_ERROR 84

char *read_file(char const *filepath, size_t len, size_t capacity);

#endif /* B_COMPILER_H_ */
