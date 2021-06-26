/*
** EPITECH PROJECT, 2020
** move_rect.c
** File description:
** my_hunter
*/

#include "../include/my.h"

void move_rect(sfIntRect *rect, int offset, int max_value)
{
    rect->left = rect->left + offset;
    if (rect->left >= max_value)
        rect->left = 0;
}