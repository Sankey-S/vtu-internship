#include <stdio.h>
#include <stdarg.h>

/* Variadic function to calculate average */
double average(int count, ...) {
    va_list args;
    double sum = 0.0;

    va_start(args, count);

    for (int i = 0; i < count; i++) {
        sum += va_arg(args, int);
    }

    va_end(args);

    return sum / count;
}

int main() {

    int n;

    printf("How many subjects? ");
    scanf("%d", &n);

    int marks[n];

    printf("Enter %d marks:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }

    double result = average(n,
        marks[0], marks[1], marks[2], marks[3], marks[4]
    );

    printf("Average = %.2f\n", result);

    return 0;
}
