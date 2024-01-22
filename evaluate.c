#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_STACK_SIZE 100

// Define a stack and its operations
int stack[MAX_STACK_SIZE];
int top = -1;

void push(int value) {
    if (top < MAX_STACK_SIZE - 1) {
        stack[++top] = value;
    } else {
        printf("Stack overflow\n");
        exit(1);
    }
}

int pop() {
    if (top >= 0) {
        return stack[top--];
    } else {
        printf("Stack underflow\n");
        exit(1);
    }
}

int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

int evaluatePostfix(char *expression) {
    int i, operand1, operand2;
    char token;

    for (i = 0; expression[i] != '\0'; i++) {
        token = expression[i];

        if (isdigit(token)) {
            push(token - '0'); // Convert character digit to integer and push to stack
        } else if (isOperator(token)) {
            operand2 = pop();
            operand1 = pop();

            switch (token) {
                case '+':
                    push(operand1 + operand2);
                    break;
                case '-':
                    push(operand1 - operand2);
                    break;
                case '*':
                    push(operand1 * operand2);
                    break;
                case '/':
                    if (operand2 != 0) {
                        push(operand1 / operand2);
                    } else {
                        printf("Division by zero\n");
                        exit(1);
                    }
                    break;
            }
        }
    }

    return pop(); // The final result is on top of the stack
}

int main() {
    char postfixExpression[100];
    
    printf("Enter a postfix expression: ");
    scanf("%s", postfixExpression);
    
    int result = evaluatePostfix(postfixExpression);
    printf("Result: %d\n", result);
    
    return 0;
}
