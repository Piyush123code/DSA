#include <stdio.h>

#define Size 100

int stack[Size];
int top = -1;

void push(int x) {
    if (top == Size - 1) {
        printf("Stack is full\n");
    } else {
        top = top + 1;
        stack[top] = x;
        printf("%d pushed onto the stack\n", x);
    }
}

int pop() {
    if (top == -1) {
        printf("Stack is empty\n");
        return -1; // Return a sentinel value to indicate an empty stack
    } else {
        int popped = stack[top];
        top = top - 1;
        return popped;
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Elements in the stack:\n");
    for (int i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }
}

int main() {
    int x;

    printf("Enter the element: ");
    scanf("%d", &x);

    push(x);

    display();

    int popped = pop();
    if (popped != -1) {
        printf("%d popped from the stack\n", popped);
    }

    return 0;
}
