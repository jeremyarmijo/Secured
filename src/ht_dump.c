/*
** EPITECH PROJECT, 2024
** disp
** File description:
** index linked list
*/

#include "hashtable.h"

void print_value(database_t *tmp)
{
    if (tmp->value != NULL) {
        my_putstr("> ");
        my_put_nbr(tmp->key);
        my_putstr(" - ");
        my_putstr(tmp->value);
        my_putchar('\n');
    }
}

void ht_dump(hashtable_t *ht)
{
    database_t *tmp = NULL;

    if (ht == NULL)
        return;
    for (int i = 0; i < ht->len; i++) {
        my_putchar('[');
        my_put_nbr(i);
        my_putstr("]:\n");
        tmp = ht->data[i];
        while (tmp != NULL) {
            print_value(tmp);
            tmp = tmp->next;
        }
    }
}
