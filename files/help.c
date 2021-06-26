/*
** EPITECH PROJECT, 2020
** help.c
** File description:
** my_hunter
*/

#include "../include/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int e = 0;
    while (str[e] != '\0'){
        my_putchar(str[e]);
        e++;
    }
    return (0);
}

void help(void)
{
    my_putstr("\nHello !\n\n");
    my_putstr("In this game you are the hunter and you have to kill the ");
    my_putstr("flying ducks\n");
    my_putstr("To kill the ducks, you just have to click on them!\n");
    my_putstr("Easy, no?\n");
    my_putstr("The more ducks you kill, the higher your score will be, so");
    my_putstr(" it's up to you\n");
    my_putstr("So good luck and have fun!\n\n");
    my_putstr("_HUNTER DUCKS GAME_\n\n");
}