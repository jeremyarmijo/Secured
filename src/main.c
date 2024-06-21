/*
** EPITECH PROJECT, 2023
** orga
** File description:
** sort
*/
#include <stdlib.h>
#include "hashtable.h"

int hash(char *key, int len)
{
    long long nb = 0;
    int lenchar = 0;
    int i = 0;

    if (len <= 0 || key == NULL)
        return 84;
    nb = my_strlen(key);
    lenchar = my_strlen(key);
    i = (int)&key[0];
    nb = (nb - 5) * 5 + recursive_power(nb, len + 15);
    nb = nb / recursive_power(nb, lenchar);
    nb = recursive_power(nb, len) + i;
    if (nb < 0)
        nb = -nb;
    return nb;
}

hashtable_t *new_hashtable(int (*hash)(char *, int), int len)
{
    hashtable_t *hash_table = malloc(sizeof(hashtable_t));

    if (len <= 0)
        return NULL;
    hash_table->len = len;
    hash_table->hash = hash;
    hash_table->data = malloc(sizeof(database_t *) * (len + 1));
    if (hash_table->data == NULL)
        return NULL;
    for (int i = 0; i <= len; i++) {
        hash_table->data[i] = malloc(sizeof(database_t));
        hash_table->data[i]->key = -1;
        hash_table->data[i]->value = NULL;
        hash_table->data[i]->next = NULL;
    }
    return hash_table;
}

char *my_search(int cript_key, database_t *tmp)
{
    while (tmp != NULL) {
        if (tmp->key == cript_key) {
            return tmp->value;
        }
        tmp = tmp->next;
    }
    return NULL;
}

char *ht_search(hashtable_t *ht, char *key)
{
    long long cript_key = 0;
    database_t *tmp = NULL;

    if (ht == NULL || key == NULL)
        return NULL;
    cript_key = ht->hash(key, ht->len);
    for (int i = 0; i < ht->len; i++) {
        tmp = ht->data[i];
        if (my_search(cript_key, tmp) != NULL) {
            return my_search(cript_key, tmp);
        }
    }
    return NULL;
}
