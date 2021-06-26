/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** my_hunter
*/

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <SFML/Graphics.h>
#include <SFML/Graphics/Rect.h>
#include <stdlib.h>
#include <time.h>
#include <SFML/Audio.h>
#ifndef my
#define my

void move_rect(sfIntRect *rect, int offset, int max_value);
int my_putstr(char const *str);
void my_putchar(char c);
int my_put_nbr(int nb);
void help();
void scale_and_position(sfSprite *my_sprite, sfVector2f my_pos,
sfSprite *my_cross, sfRenderWindow *window);
int analyse_events(sfRenderWindow *window, sfEvent event, sfSprite *my_sprite);
void kill_duck(sfSprite *my_sprite);
void destroy(sfSprite *my_sprite, sfSprite *my_spriteback,
sfTexture *my_texture, sfTexture *my_textback);
void destroy_two(int count, sfRenderWindow *window, sfMusic *music);
sfVector2f sprite_pos(sfSprite *my_sprite, sfVector2f my_pos);
void music_create(sfMusic *music);
void draw_sprite_moove(sfRenderWindow *window, sfSprite *my_sprite,
sfSprite *my_spriteback, sfVector2f moove);

#endif /* !my */
