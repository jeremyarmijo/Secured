#include "stdio.h"
#include "include/hashtable.h"

int main()
{
    int len = 3;
    hashtable_t *ht = new_hashtable(&hash, len);

    ht_insert(ht, "private key", "Example value1");
    ht_insert(ht, "secret key", "Example value2");
    ht_insert(ht, "key", "Example value3");

    puts("\e[31mDatabase contents:\e[0m");
    ht_dump(ht);

    ht_delete(ht, "key");
    printf("\e[31mDelete \"%d",
        hash("key", len));
    puts("\":\e[0m");
    ht_dump(ht);

    printf("\e[31mSearch \"%d\" = %s\e[0m\n",
        hash("private key", len),
        ht_search(ht, "private key"));
    delete_hashtable(ht);
}
