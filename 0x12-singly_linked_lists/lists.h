#define LISTS_H
#ifndef LISTS_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: This contains prototypes used in the singly linked directory
 * which are very essental for succesfull
 * program compilation.
 */
typedef struct list_s
{
    char *str;
    struct list_s *next;
    unsigned int len;
} list_t;
int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endf
