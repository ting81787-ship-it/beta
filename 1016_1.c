#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head;
    struct Node *second;

    head = malloc(sizeof(struct Node));
    if (head == NULL)
    {
        printf("無效");
        return 1;
    }
    head->data = 20;
    head->next = NULL;

    second = malloc(sizeof(struct Node));
    if (second == NULL)
    {
        printf("無效");
        return 1;
    }
    second->data = 30;
    second->next = NULL;

    head->next = second;

    printf("First Node : %d\n", head->data);
    printf("Second Node: %d\n", second->data);

    free(head);
    free(second);
    
    return 0;
}