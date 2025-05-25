/*
** SOLO PROJECT, 2025
** read_file
** File description:
** read .b file
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/b_compiler.h"

char *read_file(char const *filepath, size_t len, size_t capacity)
{
    FILE *file = fopen(filepath, "r");
    int c = 0;
    char *buffer = malloc(capacity);

    if (!file)
        exit(84);
    if (!buffer)
        exit(84);
    while ((c = fgetc(file)) != EOF) {
        buffer[len++] = (char)c;
        if (len >= capacity) {
            capacity *= 2;
            buffer = realloc(buffer, capacity);
            if (!buffer)
                exit(84);
        }
    }
    buffer[len] = '\0';
    fclose(file);
    return buffer;
}
