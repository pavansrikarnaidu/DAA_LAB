#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int detectCycle(struct Node *head) {
    struct Node *slow = head;
    struct Node *fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;           // Moves 1 step
        fast = fast->next->next;     // Moves 2 steps

        if (slow == fast) {
            return 1;                // Cycle found
        }
    }

    return 0;                        // No cycle
}

int main() {
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    second->data = 20;
    third->data = 30;
    fourth->data = 40;

    head->next = second;
    second->next = third;
    third->next = fourth;

    // Creating a cycle:
    fourth->next = second;

    if (detectCycle(head)) {
        printf("Cycle detected in the linked list\n");
    } else {
        printf("No cycle in the linked list\n");
    }

    return 0;
}
