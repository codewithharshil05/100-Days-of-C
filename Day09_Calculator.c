#include <stdio.h>
int main() {
    char op;
    double num1, num2;
    
    printf("Enter operator (+, -, *, /): ");
    scanf("%c", &op);
    
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    
    switch(op) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf", num1, num2, num1 * num2);
            break;
        case '/':
            printf("%.2lf / %.2lf = %.2lf", num1, num2, num1 / num2);
            break;
        default:
            printf("Invalid operator");
    }
    return 0;
}