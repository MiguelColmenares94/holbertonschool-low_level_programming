#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

size_t print_list(const list_t *h);

typedef struct list
{
	char *str;
	unsigned int len;
	struct list *next;
} list_t;

#endif
