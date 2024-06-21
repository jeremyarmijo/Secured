/*
** EPITECH PROJECT, 2023
** orga
** File description:
** sort
*/
#include "hashtable.h"

char *duplicate_string(char const *src)
{
    char *dest;
    int cpt2 = 0;
    int cpt = 0;

    while (src[cpt] != '\0'){
        cpt += 1;
    }
    dest = malloc((sizeof(char)) * (cpt + 1));
    while (src[cpt2] != '\0'){
        dest[cpt2] = src[cpt2];
        cpt2 += 1;
    }
    dest[cpt2] = '\0';
    return dest;
}
