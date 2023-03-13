#ifndef TASK_1_STACK_STACK_H
#define TASK_1_STACK_STACK_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct list_item {
    char data;
    struct list_item *next;
}list_item;

list_item * push(list_item *head, char data);
list_item * pop(list_item *head);
list_item * getItem(list_item *head, int n);
list_item * getLast(list_item *head);
list_item * pushBack(list_item *head, char data);
list_item * getPenultimate(list_item *head);
list_item * popBack(list_item *head);
list_item * pushItem(list_item *head, char data, int n);
list_item * popItem(list_item *head, int n);
void deleteList(list_item *head);
void arrayInput(list_item *head, char *arr, int size);
void printList(list_item *head);
#endif //TASK_1_STACK_STACK_H
