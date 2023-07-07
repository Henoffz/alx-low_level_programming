#include "hash_tables.h"
/**
 * key_index - get index for key
 * @key: string tto retrive index
 * @size: size of hash table
 * Return: index for key in the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	idx = ((hash_djb2(key)) % size);
	return (idx);
}
