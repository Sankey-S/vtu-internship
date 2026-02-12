#include <stdio.h>

#define PI 3.14159   // Constant

int globalCounter = 10;  // Global variable

void displayArea(float radius) {
    float area = PI * radius * radius;   // Local variable
    printf("Area of Circle: %.2f\n", area);
}

void increment(int value) {  // Pass by value
    value = value + 1;
    printf("Inside function, value = %d\n", value);
}

int main() {
    float radius;

    printf("Enter radius: ");
    scanf("%f", &radius);

    displayArea(radius);

    printf("Global Counter = %d\n", globalCounter);

    int number = 5;
    increment(number);

    printf("Outside function, number = %d\n", number);

    return 0;
}
