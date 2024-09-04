#include <stdio.h>
#include <stdlib.h>

#define MAX 100
int stack[MAX];
int top = -1;

void initialize();
int isEmpty();
int isFull();
void push(int value);
int pop();
void display();

int main() {
    int choice, value;

    initialize();
    printf("\nStack Operations Menu:\n");
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Display\n");
    printf("4. Exit\n");
    while (1) {
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: 
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;

            case 2: 
                value = pop();
                if (value != -1) {
                    printf("Popped value: %d\n", value);
                }
                break;

            case 3: 
                display();
                break;

            case 4: 
                printf("Exiting...\n");
                exit(0);

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

void initialize() {
    top = -1;
}

int isEmpty() {
    return top == -1;
}

int isFull() {
    return top == MAX - 1;
}

void push(int value) {
    if (isFull()) {
        printf("Stack overflow! Cannot push %d\n", value);
    } else {
        stack[++top] = value;
        printf("Pushed %d onto stack\n", value);
    }
}

int pop() {
    if (isEmpty()) {
        printf("Stack underflow! Cannot pop\n");
        return -1; 
    } else {
        return stack[top--];
    }
}

void display() {
    if (isEmpty()) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}
