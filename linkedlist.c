#include <stdio.h>
#include <stdlib.h>  // needed for malloc, free

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node* head = (struct Node*)malloc(sizeof(struct Node)); // needs stdlib.h
    head->data = 10;
    head->next = NULL;

    printf("First node data: %d\n", head->data);

    free(head); // also from stdlib.h
    return 0;
}
