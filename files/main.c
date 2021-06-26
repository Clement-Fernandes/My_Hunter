/*
** EPITECH PROJECT, 2020
** opening_a_window.c
** File description:
** my_hunter
*/

#include "../include/my.h"

int main(int ac, char **av)
{
    sfRenderWindow *window;
    sfEvent event;
    sfVideoMode video_mode = {800, 600, 32};
    sfTexture *my_texture = sfTexture_createFromFile("images/spritesheet.png",
    NULL);
    sfTexture *my_textback = sfTexture_createFromFile("images/background.png",
    NULL);
    sfTexture *my_textcross = sfTexture_createFromFile("images/crosshair.png",
    NULL);
    sfSprite *my_sprite = sfSprite_create();
    sfSprite *my_spriteback = sfSprite_create();
    sfSprite *my_cross = sfSprite_create();
    sfIntRect rect;
    sfVector2f my_pos = {0, 50};
    sfVector2f moove = {25, 0};
    sfClock *clock = sfClock_create();
    sfTime timer;
    sfMusic *music = sfMusic_createFromFile("sounds/music_background.ogg");
    float seconds;
    int count;

    rect.top = 0;
    rect.left = 0;
    rect.width = 110;
    rect.height = 110;

    if (ac == 2 && av[1][1] == 'h')
        help();
    if (ac == 1) {
        window = sfRenderWindow_create(video_mode, "HUNTER DUCKS GAME",
        sfClose | sfResize, NULL);
        sfSprite_setTexture(my_spriteback, my_textback, sfFalse);
        sfSprite_setTexture(my_sprite, my_texture, sfFalse);
        sfSprite_setTexture(my_cross, my_textcross, sfFalse);
        sfRenderWindow_setFramerateLimit(window, 60);
        srand(time(NULL));
        music_create(music);
        while (sfRenderWindow_isOpen(window)) {
            scale_and_position(my_sprite, my_pos, my_cross, window);
            sfRenderWindow_display(window);
            my_pos.x = my_pos.x + 3;
            timer = sfClock_getElapsedTime(clock);
            seconds = timer.microseconds / 1000000.0;
            if (seconds > 0.036) {
                if (analyse_events(window, event, my_sprite) == 1) {
                    my_pos.x = 0;
                    my_pos.y = rand() % 500;
                    count = count + 10;
                }
                sfRenderWindow_clear(window, sfBlack);
                analyse_events(window, event, my_sprite);
                move_rect(&rect, 110, 330);
                sfSprite_setTextureRect(my_sprite, rect);
                draw_sprite_moove(window, my_sprite, my_spriteback, moove);
                sfClock_restart(clock);
            }
            my_pos = sprite_pos(my_sprite, my_pos);
        }
        destroy_two(count, window, music);
        destroy(my_sprite, my_spriteback, my_texture, my_textback);
        return (0);
    }
}