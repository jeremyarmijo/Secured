/*
** EPITECH PROJECT, 2023
** task
** File description:
** 2
*/
#include "hashtable.h"

int recursive_power(int nb, int p)
{
    if (nb == 0 && p == 0)
        return 1;
    if (p < 0)
        return 0;
    if (p == 0)
        return 1;
    nb = nb * recursive_power(nb, p - 1);
    return nb;
}
