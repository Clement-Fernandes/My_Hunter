/*
** EPITECH PROJECT, 2020
** manage_mouse_click.c
** File description:
** my_hunter
*/

#include "../include/my.h"

int analyse_events(sfRenderWindow *window, sfEvent event, sfSprite *my_sprite)
{
    sfVector2i mouseclick = sfMouse_getPositionRenderWindow(window);
    sfVector2f duck = sfSprite_getPosition(my_sprite);
    sfVector2f pos = {0, 50};

    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(window);
        if (event.type == sfEvtMouseButtonPressed) {
            if (mouseclick.x > duck.x - 30 && mouseclick.y > duck.y &&
                mouseclick.x < duck.x + 50 && mouseclick.y < duck.y + 50) {
                my_putstr("+10 pts\n");
                return (1);
                }
        }
    }
    return (0);
}

int my_put_nbr(int nb)
{
    long int n = nb;
    int rest = 0;

    if (n < 0) {
        my_putchar('-');
        n = n * -1;
    }
    if (n >= 0 && n <= 9)
        my_putchar(n + '0');
    if (n >= 10) {
        rest = n % 10;
        my_put_nbr(n / 10);
        my_putchar(rest + '0');
    }
    return (0);
}