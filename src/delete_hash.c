/*
** EPITECH PROJECT, 2023
** orga
** File description:
** sort
*/

#include "hashtable.h"

database_t *my_freevalue(database_t *tmp, int cript_key)
{
    if (tmp->key == cript_key) {
        free(tmp->value);
        tmp->value = NULL;
    }
    return tmp;
}

int ht_delete(hashtable_t *ht, char *key)
{
    database_t *tmp = NULL;
    long long cript_key = 0;

    if (ht == NULL || key == NULL)
        return 84;
    cript_key = ht->hash(key, ht->len);
    for (int i = 0; i < ht->len; i++) {
        tmp = ht->data[i];
        while (tmp != NULL && tmp->value != NULL) {
            tmp = my_freevalue(tmp, cript_key);
            tmp = tmp->next;
        }
    }
    return 0;
}

void delete_hashtable(hashtable_t *ht)
{
    database_t *tmp = NULL;

    if (ht == NULL)
        return;
    for (int i = 0; i < ht->len; i++) {
        tmp = ht->data[i];
        while (tmp != NULL) {
            free(tmp->value);
            tmp = tmp->next;
        }
        free(tmp);
    }
    free(ht);
}
