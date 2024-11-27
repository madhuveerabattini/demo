#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Asking for input
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Calculating sum
    sum = num1 + num2;

    // Displaying result
    printf("Sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
}
