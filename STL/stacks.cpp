//
// Created by Bertin Mihigo Sano on 2023-08-15.
//
// Stack implementation in C++

#include <iostream>

using namespace std;

#define MAX 10
int siz = 0;

// Creating a stack
struct stack {
    int items[MAX];
    int top;
};
typedef struct stack st;

void createEmptyStack(st *s) {
    s->top = -1;
}

// Check if the stack is full
bool isfull(st *s) {
    if (s->top == MAX - 1)
        return true;
    else
        return false;
}

// Check if the stack is empty
bool isempty(st *s) {
    if (s->top == -1)
        return true;
    else
        return false;
}

// Add elements into stack
void push(st *s, int newitem) {
    if (isfull(s)) {
        cout << "STACK FULL";
    }
    else {
        s->top++;
        s->items[s->top] = newitem;
    }
    siz++;
}

// Remove element from stack
void pop(st *s) {
    if (isempty(s)) {
        cout << "\n STACK EMPTY \n";
    } else {
        cout << "Item popped= " << s->items[s->top];
        s->top--;
    }
    siz--;
    cout << endl;
}

// Print elements of stack
void printStack(st *s) {
    printf("Stack: ");
    for (int i = 0; i < siz; i++) {
        cout << s->items[i] << " ";
    }
    cout << endl;
}

// Driver code
int main() {
    int ch;
    st *s = (st *)malloc(sizeof(st));

    createEmptyStack(s);

    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);

    printStack(s);

    pop(s);

    cout << "\nAfter popping out\n";
    printStack(s);
}