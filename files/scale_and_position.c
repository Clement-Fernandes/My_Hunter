/*
** EPITECH PROJECT, 2020
** scale_and_position.c
** File description:
** my_hunter
*/

#include "../include/my.h"

void scale_and_position(sfSprite *my_sprite, sfVector2f my_pos,
                        sfSprite *my_cross, sfRenderWindow *window)
{
    sfVector2f scale = {0.5, 0.5};
    sfVector2f scalecross = {0.4, 0.4};
    sfVector2i pos_cross = sfMouse_getPositionRenderWindow(window);
    sfVector2f cross = {pos_cross.x - 26, pos_cross.y - 24};
    sfRenderWindow_setMouseCursorVisible(window, sfFalse);

    sfSprite_setScale(my_sprite, scale);
    sfSprite_setPosition(my_sprite, my_pos);
    sfSprite_setScale(my_cross, scalecross);
    sfSprite_setPosition(my_cross, cross);
    sfRenderWindow_drawSprite(window, my_cross, NULL);
}