#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table you want to look into
 * @key: is the key you are looking for
 *
 * Return: the value associated with the element, or NULL if key couldn’t be
 * found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (NULL);
	idx = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	while (tmp && strcmp(tmp->key, key))
		tmp = tmp->next;
	return tmp->value;
}
