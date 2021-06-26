/*
** EPITECH PROJECT, 2020
** trash.c
** File description:
** my_hunter
*/

#include "../include/my.h"

void destroy(sfSprite *my_sprite, sfSprite *my_spriteback,
sfTexture *my_texture, sfTexture *my_textback)
{
        sfSprite_destroy(my_sprite);
        sfSprite_destroy(my_spriteback);
        sfTexture_destroy(my_texture);
        sfTexture_destroy(my_textback);
}

void destroy_two(int count, sfRenderWindow *window, sfMusic *music)
{
        my_putstr("FINAL SCORE : ");
        my_put_nbr(count);
        my_putstr(" pts\n");
        sfMusic_destroy(music);
        sfRenderWindow_destroy(window);
}

sfVector2f sprite_pos(sfSprite *my_sprite, sfVector2f my_pos)
{
    sfSprite_setPosition(my_sprite, my_pos);
    if (my_pos.x >= 800) {
        my_pos.x = 0;
        my_pos.y = rand() % 550;
    }
    return (my_pos);
}

void music_create(sfMusic *music)
{
    sfMusic_play(music);
    sfMusic_setVolume(music, 10);
    sfMusic_setLoop(music, sfTrue);
}

void draw_sprite_moove(sfRenderWindow *window, sfSprite *my_sprite,
sfSprite *my_spriteback, sfVector2f moove)
{
    sfRenderWindow_drawSprite(window, my_spriteback, NULL);
    sfRenderWindow_drawSprite(window, my_sprite, NULL);
    sfSprite_move(my_sprite, moove);
}