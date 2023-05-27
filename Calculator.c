
#include <stdio.h>

void division(int num1, int num2) {

    if (num1 != 0 && num2 != 0) {
        int result = num1 / num2;
        printf("%d", result);
    } else {
        printf("Error: Division by zero is not allowed.");
    }
}

void multiplication(int num1, int num2) {

    int result = num1 * num2;
    printf("%d", result);
}

void subtraction(int num1, int num2) {

    int result = num1 - num2;
    printf("%d", result);
}

void addition(int num1, int num2) {

    int result = num1 + num2;
    printf("%d", result);
}

int main() {

    char operation;
    int a, b;

    printf("I will ask you to input two numbers, then to choose a mathematical function.\n");
    printf("Please input two numbers: ");
    scanf("%d %d", &a, &b);

    printf("What mathematical operation would you like to carry out? (+, -, *, /): ");
    scanf(" %c", &operation);

    switch(operation) {
        case '+':
            addition(a, b);
            break;
        case '-':
            subtraction(a, b);
            break;
        case '*':
            multiplication(a, b);
            break;
        case '/':
            division(a, b);
            break;
        default:
            printf("Error: Invalid operation selected.");
    }

    return 0;
}
