/*
** EPITECH PROJECT, 2023
** minishell
** File description:
** minishell1.c
*/

#include <stdlib.h>
#include "meta_libc.h"

char *meta_strdup(char *dest, char *src)
{
    int i;

    dest = malloc(sizeof(char) * (meta_strlen(src)) + 1);
    for (i = 0; src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    dest[i] = src[i];
    return dest;
}
