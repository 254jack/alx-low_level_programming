#include "main.h"
/**
 * *create_array - function that init a char to an array of characters
 * @size: size
 * @c: character
 * Return: 0
 */
char *create_array(unsigned int size, char c) {
	unsigned int size;
	char c;

    if (size == 0) {
        return NULL;
    }

    char *arr = malloc(size * sizeof(char));

    if (arr == NULL) {
        return NULL;
    }

    for (int i = 0; i < size; i++) {
        arr[i] = c;
    }

    return arr;
}

