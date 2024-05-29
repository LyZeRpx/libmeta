/*
** EPITECH PROJECT, 2023
** libmeta
** File description:
** meta_detection.c
*/

#include "meta_utils.h"
#include "meta_assets.h"

sfBool meta_detect_collision(meta_assets_t object_1, meta_assets_t object_2)
{
    sfVector2u object_1_texture_size = sfTexture_getSize(object_1.texture);
    sfVector2u object_2_texture_size = sfTexture_getSize(object_2.texture);

    object_1.postiton = sfSprite_getPosition(object_1.asset);
    object_2.postiton = sfSprite_getPosition(object_2.asset);

    return CENTER_DIFF < RADIUS_DIFF ? sfTrue : sfFalse;

}