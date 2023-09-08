/*WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Division, modulo)*/
#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                printf("Error! Division by zero is not allowed.\n");
                return 1; // Exit with an error code
            }
            result = num1 / num2;
            break;
        case '%':
            if (num2 == 0) {
                printf("Error! Modulo by zero is not allowed.\n");
                return 1; // Exit with an error code
            }
            result = fmod(num1, num2); // Using fmod for
        }
    dd
}

