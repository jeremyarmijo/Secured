/*
** EPITECH PROJECT, 2023
** orga
** File description:
** sort
*/
#include "hashtable.h"

int to_number(char const *str)
{
    int i = 0;
    int nbr = 0;

    while (str[i] != '\0'){
        if (str[i] >= '0' && str[i] <= '9')
            nbr = nbr * 10 + str[i] - 48;
            else
                return -1;
        i++;
    }
    return nbr;
}
