/*
** EPITECH PROJECT, 2024
** add value in linked list
** File description:
** in c
*/
#include "hashtable.h"

int ht_insert(hashtable_t *ht, char *key, char *value)
{
    long long cript_key = 0;
    int index = 0;
    database_t *element = NULL;

    if (ht == NULL || key == NULL || value == NULL)
        return 84;
    cript_key = ht->hash(key, ht->len);
    index = cript_key % ht->len;
    if (ht->data[index]->value != NULL) {
        element = malloc(sizeof(database_t));
        element->key = cript_key;
        element->value = duplicate_string(value);
        element->next = ht->data[index];
        ht->data[index] = element;
        } else {
            ht->data[index]->value = duplicate_string(value);
            ht->data[index]->key = cript_key;
            ht->data[index]->next = NULL;
        }
    return 0;
}
