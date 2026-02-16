#include <stdio.h>

/* Recursive function for factorial */
int factorial(int n) {
    if (n <= 1)   // Base condition
        return 1;
    else
        return n * factorial(n - 1);   // Recursive call
}

/* Recursive function for Fibonacci */
int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {

    int i = 1;

    printf("---- WHILE LOOP ----\n");
    while (i <= 5) {
        printf("i = %d\n", i);
        i++;
    }

    printf("\n---- DO-WHILE LOOP ----\n");
    int j = 1;
    do {
        printf("j = %d\n", j);
        j++;
    } while (j <= 5);

    printf("\n---- FOR LOOP ----\n");
    for (int k = 1; k <= 5; k++) {
        printf("k = %d\n", k);
    }

    /* Infinite Loop Example (Commented to avoid execution)
    while(1) {
        printf("This is an infinite loop\n");
    }
    */

    printf("\n---- RECURSION ----\n");
    int num;

    printf("Enter number for factorial: ");
    scanf("%d", &num);
    printf("Factorial of %d = %d\n", num, factorial(num));

    printf("\nEnter position for Fibonacci: ");
    scanf("%d", &num);
    printf("Fibonacci of %d = %d\n", num, fibonacci(num));

    return 0;
}
