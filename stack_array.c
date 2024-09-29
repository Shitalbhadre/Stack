#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int stack[MAX];
int top = -1;

void push() {
    int value;
    if (top == MAX - 1) {
        printf("Stack Overflow!\n");
    } else {
        printf("Enter the value to be pushed: ");
        scanf("%d", &value);
        top=top+1;
        stack[top] = value;
        printf("%d pushed into the stack.\n", value);
    }
}

void pop() {
    if (top == -1) {
        printf("Stack Underflow!\n");
    } else {
        printf("%d popped from the stack.\n", stack[top]);
        top=top-1;
    }
}

void print() {
    if (top == -1) {
        printf("The stack is empty.\n");
    } else {
        printf("Stack elements are: \n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int main() {
    int choice;
    while (1) {
        printf("\n** Stack Menu **\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Print Stack\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                print();
                break;
            case 4:
                printf("Exiting program...\n");
                exit(0);
            default:
                printf("Invalid choice! Please choose again.\n");
        }
    }
    return 0;
}