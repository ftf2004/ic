#include <stdio.h>

#define MAX 5  // Define the maximum size of the queue

int main() {
    int queue[MAX];
    int front = 0, rear = -1, size = 0;
    int choice, value;
    printf("Queue Operations:\n1. Enqueue\n2. Dequeue\n3. Display Queue\n4. Exit\n");
    do {
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: 
                if (size == MAX) {
                    printf("Queue is full. Cannot enqueue.\n");
                } else {
                    printf("Enter value to enqueue: ");
                    scanf("%d", &value);
                    rear++;
                    queue[rear] = value;
                    size++;
                    printf("Enqueued %d\n", value);
                }
                break;

            case 2: 
                if (size == 0) {
                    printf("Queue is empty. Cannot dequeue.\n");
                } else {
                    value = queue[front];
                    front++;
                    size--;
                    printf("Dequeued %d\n", value);
                }
                break;

            case 3: 
                if (size == 0) {
                    printf("Queue is empty.\n");
                } else {
                    printf("Queue elements are:\n");
                    for (int i = 0; i < size; i++) {
                        printf("%d ", queue[front++]);
                    }
                    printf("\n");
                }
                break;

            case 4: 
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}
