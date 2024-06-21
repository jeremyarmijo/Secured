/*
** EPITECH PROJECT, 2023
** B-CPE-110 : Secured
** File description:
** hashtable.h
*/
#include <unistd.h>
#include <stdlib.h>

#ifndef HASHTABLE_H
    #define HASHTABLE_H

typedef struct database_s {
    long long key;
    char *value;
    struct database_s *next;
}database_t;

typedef struct hashtable_s {
    int len;
    int (*hash)(char *, int);
    database_t **data;
} hashtable_t;

int hash(char *key, int len);
hashtable_t *new_hashtable(int (*hash)(char *, int), int len);
void delete_hashtable(hashtable_t *ht);
int ht_insert(hashtable_t *ht, char *key, char *value);
int ht_delete(hashtable_t *ht, char *key);
char *ht_search(hashtable_t *ht, char *key);
void ht_dump(hashtable_t *ht);
char *duplicate_string(char const *str);
int my_putstr(char const *str);
void my_putchar(char c);
int my_put_nbr(int n);
int my_strlen(char *str);
int recursive_power(int nb, int p);
database_t *my_freevalue(database_t *tmp, int cript_key);

#endif
