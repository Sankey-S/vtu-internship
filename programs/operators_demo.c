#include <stdio.h>

int main() {
    int a = 10, b = 3;
    int result;

    printf("Initial Values: a = %d, b = %d\n\n", a, b);

    // Arithmetic Operators
    printf("Arithmetic Operators:\n");
    printf("Addition: a + b = %d\n", a + b);
    printf("Subtraction: a - b = %d\n", a - b);
    printf("Multiplication: a * b = %d\n", a * b);
    printf("Division: a / b = %d\n", a / b);
    printf("Modulus: a %% b = %d\n\n", a % b);

    // Increment & Decrement
    printf("Increment & Decrement:\n");
    printf("Post-Increment (a++): %d\n", a++);
    printf("After Post-Increment, a = %d\n", a);
    printf("Pre-Increment (++a): %d\n", ++a);
    printf("Post-Decrement (a--): %d\n", a--);
    printf("After Post-Decrement, a = %d\n\n", a);

    // Relational Operators
    printf("Relational Operators:\n");
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n\n", a != b);

    // Logical Operators
    printf("Logical Operators:\n");
    printf("(a > 5 && b < 5): %d\n", (a > 5 && b < 5));
    printf("(a > 5 || b > 5): %d\n", (a > 5 || b > 5));
    printf("!(a > b): %d\n\n", !(a > b));

    // Assignment & Compound Assignment
    printf("Assignment Operators:\n");
    result = a;
    printf("result = a: %d\n", result);
    result += 5;
    printf("result += 5: %d\n", result);
    result *= 2;
    printf("result *= 2: %d\n\n", result);

    // Bitwise Operators
    printf("Bitwise Operators:\n");
    printf("a & b: %d\n", a & b);
    printf("a | b: %d\n", a | b);
    printf("a ^ b: %d\n", a ^ b);
    printf("~a: %d\n", ~a);
    printf("a << 1: %d\n", a << 1);
    printf("a >> 1: %d\n\n", a >> 1);

    // sizeof Operator
    printf("Special Operator:\n");
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of float: %lu bytes\n", sizeof(float));

    return 0;
}
