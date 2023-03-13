#include "stack.h"

list_item * push(list_item *head, char data){
    list_item *tmp = (list_item*) malloc(sizeof(list_item));
    tmp->data = data;
    tmp->next = head;
    return tmp;
}
list_item* pop(list_item *head){
    if (head == NULL)
        exit(-1);
    list_item* prev = head;
    head = head->next;
    free(prev);
    return head;
}
list_item * getItem(list_item *head, int n){
    int counter = 0;
    while (counter < n && head){
        head = head->next;
        counter++;}
    return head;
}
list_item * getLast(list_item *head){
    if (head == NULL)
        return NULL;
    while (head->next){
        head = head->next;
    }
    return head;
}
list_item * pushBack(list_item *head, char data){
    list_item *last = getLast(head);
    list_item *tmp = (list_item*) malloc(sizeof(list_item));
    tmp->data = data;
    tmp->next = NULL;
    last->next = tmp;
    return head;
}
list_item * getPenultimate(list_item *head){
    if (head == NULL)
        exit(-1);
    while (head->next->next){
        head = head->next;
    }
    return head;
}
list_item * popBack(list_item *head){
    list_item *last = NULL;
    if (!head)
        exit(-1);
    last = getPenultimate(head);
    if (last == NULL){
        free(head);
        head = NULL;}
    else{
        free(last->next);
        last->next = NULL;
    }
    return head;
}
list_item * pushItem(list_item *head, char data, int n){
    unsigned i = 0;
    list_item *tmp = NULL;
    while (i < n && head->next){
        head = head->next;
        i++;
    }
    tmp = (list_item*) malloc(sizeof(list_item));
    tmp->data = data;
    if (head->next){
        tmp->next = head->next;}
    else{
        tmp->next = NULL;
    }
    head->next = tmp;
    return head;
}
list_item * popItem(list_item *head, int n){
    if (n == 0)
        pop(head);
    else{
        list_item *prev = getItem(head, n - 1);
        list_item *elm = prev->next;
        prev->next = elm->next;
        free(elm);
    }
    return head;
}
void deleteList(list_item *head){
    while (head->next){
        pop(head);
        (head) = (head)->next;
    }
    free(head);
}
void arrayInput(list_item *head, char *arr, int size){
    int i = size;
    if (arr == 0 && size == 0)
        return;
    while (i-- != 0){
        push(head, arr[i]);
    }
}
void printList(list_item *head){
    while (head){
        printf("%c", head->data);
        head = head->next;
    }
    printf("\n");
}