#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX_SIZE 100
struct Stack {
    int arr[MAX_SIZE];
    int top;
};
void initialize(struct Stack *stack) {
    stack->top = -1;
}
int isEmpty(struct Stack *stack) {
    return stack->top == -1;
}
void push(struct Stack *stack, int value) {
    if (stack->top >= MAX_SIZE - 1) {
        printf("Stack overflow: Cannot push element %d\n", value);
        exit(1);
    }
    stack->arr[++stack->top] = value;
}
int pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow: Cannot pop element\n");
        exit(1);
    }
    return stack->arr[stack->top--];
}
int evaluatePostfix(char expression[]) {
    struct Stack stack;
    initialize(&stack);
    for (int i = 0; expression[i] != '\0'; i++) {
        if (isdigit(expression[i])) {
            push(&stack, expression[i] - '0');  
        } else {
            int operand2 = pop(&stack);
            int operand1 = pop(&stack);
            
            switch (expression[i]) {
                case '+':
                    push(&stack, operand1 + operand2);
                    break;
                case '-':
                    push(&stack, operand1 - operand2);
                    break;
                case '*':
                    push(&stack, operand1 * operand2);
                    break;
                case '/':
                    push(&stack, operand1 / operand2);
                    break;
                default:
                    printf("Invalid operator: %c\n", expression[i]);
                    exit(1);
            }
        }
    }   
    return pop(&stack);
}
int main() {
    char postfix[] = "23*5+"; 
    int result = evaluatePostfix(postfix);
    printf("Result: %d\n", result);     
    return 0;
}

