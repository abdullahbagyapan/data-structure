#include <stdio.h>
#include <stdlib.h>


typedef struct Node{
    int value;
    struct Node* next;
    struct Node* previous;
}Node;


int Size = 0;
Node* HEAD = NULL;
Node* TAIL = NULL;


int Add(int value) {

    Node *node = malloc(sizeof(Node));

    node->value = value;
    node->previous = TAIL;
    node->next = NULL;
    
    if (HEAD != NULL) {

        TAIL->next = node;
        TAIL = node;
    } else {

        HEAD = node;
        TAIL = node;
    }
    Size++;

    return value;
}

int Remove(int value) {

    Node* iterator = HEAD;

    while (iterator != NULL) {
        
        if (iterator->value == value) {

            Node* previous = iterator->previous;
            Node* next = iterator->next;

            previous->next = next;
            next->previous = previous;

            free(iterator);
            return value;
        }
        iterator = iterator->next;
    }
    
    return -1;
}

void Print() {

    Node* iterator = HEAD;

    while (iterator != NULL) {
        printf("%d \n",iterator->value);

        iterator = iterator->next;
    }
}

int main() {

    Add(1);
    Add(2);
    Add(3);
    Print(); // 1 2 3

    Remove(2);
    Print(); // 1 3

    return 0;
}