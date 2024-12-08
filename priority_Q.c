#include<stdio.h>
#include<stdlib.h>

#define MAX_QUEUE_SIZE 10

int queue[MAX_QUEUE_SIZE];
int rear = -1;
int front = -1;

int IsFull() {
    if (rear == MAX_QUEUE_SIZE - 1)
        return 1;
    else
        return 0;
}

int IsEmpty() {
    if (front == -1 || front > rear)
        return 1;
    else
        return 0;
}

void enqueue(int data) {
    if (IsFull()) {
        printf("Queue overflow\n");
    } else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        queue[rear] = data;
    }
}

int dequeue() {
    if (IsEmpty()) {
        printf("Queue is empty\n");
        return -1;  // Indicating empty queue
    } else {
        int a = queue[front];
        front++;
        if (front > rear) {
            front = rear = -1;  // Reset when queue is empty
        }
        return a;
    }
}

void heapify(int arr[], int i, int n) {
    int la = i;
    int l = (2 * i) + 1; // left child
    int r = (2 * i) + 2; // right child

    if (l < n && arr[l] > arr[la]) {
        la = l;
    }
    if (r < n && arr[r] > arr[la]) {
        la = r;
    }
    if (la != i) {
        int temp = arr[la];
        arr[la] = arr[i];
        arr[i] = temp;
        heapify(arr, la, n);
    }
}

int main() {
    int n;
    printf("Enter the number of elements to be entered: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements of the queue: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Build max heap
    for (int i = (n / 2) - 1; i >= 0; i--) {
        heapify(arr, i, n);
    }

    // Sorting the heap array (Max heap sort)
    for (int i = n - 1; i > 0; i--) {
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        heapify(arr, 0, i);
    }

    printf("The sorted array (max heap sorted): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Enqueue elements in the queue
    for (int i = n - 1; i >= 0; i--) {
        enqueue(arr[i]);
    }

    // Print the queue
    printf("The queue is: ");
    while (!IsEmpty()) {
        int a = dequeue();
        if (a != -1) {
            printf("%d ", a);
        }
    }
    printf("\n");

    return 0;
}
