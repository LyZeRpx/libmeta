/*
** EPITECH PROJECT, 2023
** libmeta
** File description:
** meta_links_file
*/

#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include "meta_links.h"

meta_linked_list_t *meta_new_list(void)
{
    meta_linked_list_t *list = malloc(sizeof(meta_linked_list_t));

    if (!list)
        return NULL;
    list->next = NULL;
    return NULL;
}
