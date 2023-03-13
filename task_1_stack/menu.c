#include "menu.h"
#include "stack.h"
#include <stdio.h>

void userMenu(){
    printf("What you want to do?\n");
    printf("0.Cancel all\n");
    printf("1.Push[x]\n");
    printf("2.Pop[x]\n");
    printf("3.PushBack[x]\n");
    printf("4.PopBack[x]\n");
    printf("5.PushItem[x][n]\n");
    printf("6.PopItem[n]\n");
    printf("7.DeleteList\n");
    printf("8.PrintList\n");
}
void distributor(){
    list_item *head = NULL;
    unsigned action;
    char data;
    int n;
    printf("Enter the action, please:");
    scanf("%d", &action);
    printf("\n");

    switch (action) {
        case 1:
            printf("Push[x]=");
            scanf("%c\n", &data);
            head = push(head, data);
            printf("Push[x]=%c\n",  head->data);
            action = 0;
            break;
        case 2:
            printf("Pop[x]\n");
            head = pop(head);
            break;
        case 3:
            printf("PushBack[x]=");
            scanf("%c\n", &data);
            head = pushBack(head, data);
            break;
        case 4:
            printf("PopBack[x]\n");
            popBack(head);
            break;
        case 5:
            printf("PushItem[x][n]=");
            scanf("%c%d\n", &data, &n);
            head = pushItem(head, data, n);
            break;
        case 6:
            printf("PopItem[x][n]=");
            scanf("%d\n", &n);
            head = popItem(head,n);
            break;
        case 7:
            printf("DeleteList\n");
            deleteList(head);
            break;
        case 8:
            printf("PrintList\n");
            printList(head);
            break;
        case 0:
            printf("Cancel all\n");
            break;
    }
}