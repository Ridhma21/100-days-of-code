// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main()
{
    int num1, num2;
    int sum, sub, mult;
    float div;

    printf("Enter any two numbers: ");
    scanf("%d%d", &num1, &num2);

    sum = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = (float)num1 / num2; 

    
    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", sub);
    printf("Product = %d\n", mult);
    printf("Quotient = %f\n", div);

    return 0;
}
