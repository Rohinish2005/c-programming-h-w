
#include <stdio.h>
int main() {
    char operator;
    double num1, num2, result;

    do {
        printf("Enter an operator (+, -, *, /) or 'q' to quit: ");
        scanf(" %c", &operator);

        if (operator == 'q') {
            printf("Exiting the calculator.\n");
            break;
        }

        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);

        switch (operator) {
            case '+':
                result = num1 + num2;
                printf("Result: %.2lf\n", result);
                break;
            case '-':
                result = num1 - num2;
                printf("Result: %.2lf\n", result);
                break;
            case '*':
                result = num1 * num2;
                printf("Result: %.2lf\n", result);
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2lf\n", result);
                } else {
                    printf("Error! Division by zero.\n");
                }
                break;
            default:
                printf("Invalid operator! Please try again.\n");
        }
    } while (1);

    return 0;
}

