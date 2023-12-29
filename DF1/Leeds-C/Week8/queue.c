#include <stdio.h>

#define MAX_SIZE 100

typedef struct {
    int array[MAX_SIZE];
    int front;  // Front of the queue
    int rear;   // Rear of the queue
} Queue;

// Initialize an empty queue
void initializeQueue(Queue* q) {
    q->front = -1;
    q->rear = -1;
}

// Check if the queue is empty
int isEmpty(Queue* q) {
    return (q->front == -1);
}

// Check if the queue is full
int isFull(Queue* q) {
    return ((q->rear + 1) % MAX_SIZE == q->front);
}

// Enqueue (add an element to the rear of the queue)
void enqueue(Queue* q, int item) {
    if (isFull(q)) {
        printf("Queue is full. Cannot enqueue.\n");
        return;
    }

    if (isEmpty(q)) {
        q->front = 0;
    }

    q->rear = (q->rear + 1) % MAX_SIZE;
    q->array[q->rear] = item;
}

// Dequeue (remove an element from the front of the queue)
int dequeue(Queue* q) {
    int item;

    if (isEmpty(q)) {
        printf("Queue is empty. Cannot dequeue.\n");
        return -1;
    }

    item = q->array[q->front];

    if (q->front == q->rear) {
        q->front = -1;
        q->rear = -1;
    } else {
        q->front = (q->front + 1) % MAX_SIZE;
    }

    return item;
}

int main() {
    Queue myQueue;
    initializeQueue(&myQueue);

    enqueue(&myQueue, 10);
    enqueue(&myQueue, 20);
    enqueue(&myQueue, 30);

    printf("Dequeued: %d\n", dequeue(&myQueue));
    printf("Dequeued: %d\n", dequeue(&myQueue));

    enqueue(&myQueue, 40);

    printf("Dequeued: %d\n", dequeue(&myQueue));
    printf("Dequeued: %d\n", dequeue(&myQueue));

    return 0;
}
