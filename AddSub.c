#include <stdio.h>

// Function prototypes
int Add(int a, int b);
int Subtract(int a, int b);

int main() {
    int num1, num2, sum, difference;

    // Taking user input
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calling the add and subtract functions
    sum = Add(num1, num2);
    difference = Subtract(num1, num2);

    // Displaying the results
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);

    return 0;
}

// Function to calculate addition
int Add(int a, int b) {
    return a + b;
}

// Function to calculate subtraction
int Subtract(int a, int b) {
    return a - b;
}
