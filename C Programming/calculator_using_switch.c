#include <stdio.h>

double add(double num1, double num2) {
    return num1 + num2;}
double subtract(double num1, double num2) {
    return num1 - num2;}
double multiply(double num1, double num2) {
    return num1 * num2;}
double divide(double num1, double num2) {
    return num1 / num2;}
int main() {
    double num1, num2;
    char operator;

    printf("Enter two numbers: ");
    scanf("%lf%lf", &num1, &num2);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            printf("%.1lf + %.1lf = %.1lf", num1, num2, add(num1, num2));
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf", num1, num2, subtract(num1, num2));
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf", num1, num2, multiply(num1, num2));
            break;
        case '/':
            printf("%.1lf / %.1lf = %.1lf", num1, num2, divide(num1, num2));
            break;
        default:
            printf("Error! operator is not correct");
    }

    return 0;
}
