#include <stdio.h>
#include <conio.h>
#define N 5
int stack[N];
int top = -1;

void push() {
    int x;
    printf("Enter the data: ");
    scanf("%d", &x);
    if (top == N - 1) {
        printf("Overflow\n");
    } else {
        top++;
        stack[top] = x; // push(x);
    }
}

void pop() {
    int item;
    if (top == -1) {
        printf("Underflow\n");
    } else {
        item = stack[top];
        top--;
         printf("The popped element element is %d",item);
    }
}

void peek() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("%d\n", stack[top]);
    }
}

void display() {
    int i;
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        for (i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int ch;
  

    do {
        printf("Enter choice: 1.push, 2.pop, 3.peek, 4.display, 0.exit\n");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 0:
                printf("Exiting program\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (ch != 0);
    getch(); 
    return 0;
}
