#include <stdio.h>

/* Global variable (External Linkage by default) */
int globalVar = 100;

/* Function to demonstrate static variable */
void staticDemo() {
    static int count = 0;  // Retains value between calls
    count++;
    printf("Static count = %d\n", count);
}

/* Function to demonstrate auto and register */
void storageDemo() {
    auto int a = 10;        // Default local variable
    register int b = 20;    // Suggest CPU register storage

    printf("Auto variable a = %d\n", a);
    printf("Register variable b = %d\n", b);
}

int main() {

    printf("Global variable = %d\n", globalVar);

    printf("\n--- Static Variable Demo ---\n");
    staticDemo();
    staticDemo();
    staticDemo();

    printf("\n--- Storage Class Demo ---\n");
    storageDemo();

    return 0;
}
