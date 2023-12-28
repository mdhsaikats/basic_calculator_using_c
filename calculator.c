#include<stdio.h>

int main() {
    int a, b, sum, sub, mul;
    char c;
    float div;

    printf("Enter the first digit:");
    scanf("%d", &a);
    printf("Enter the second digit:");
    scanf("%d", &b);

    printf("Enter the operator:");
    scanf(" %c", &c); 

    if (c == '+') {
        sum = a + b;
        printf("Result: %d", sum);
    } else if (c == '-') {
        sub = a - b;
        printf("Result: %d", sub);
    } else if (c == '*') {
        mul = a * b;
        printf("Result: %d", mul);
    } else if (c == '/') {
        
        if (b != 0) {
            div = a / b;
            printf("Result: %f", div);
        } else {
            printf("Error **division by zero**");
        }
    } else {
        printf("Error **input a valid value**");
    }

    return 0;
}
