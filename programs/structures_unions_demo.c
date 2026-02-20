#include <stdio.h>
#include <string.h>

/* Structure Definition using typedef */
typedef struct {
    char name[50];
    unsigned int mark;
} Student;

/* Union Example */
union Data {
    int i;
    float f;
    char str[20];
};

int main() {

    /* Structure Demo */
    Student s1;
    strcpy(s1.name, "Sanketh");
    s1.mark = 95;

    printf("Structure Example:\n");
    printf("Name: %s\n", s1.name);
    printf("Mark: %u\n\n", s1.mark);

    /* Union Demo */
    union Data data;

    data.i = 10;
    printf("Union storing int: %d\n", data.i);

    data.f = 220.5;
    printf("Union storing float: %.2f\n", data.f);

    strcpy(data.str, "Hello");
    printf("Union storing string: %s\n\n", data.str);

    /* Type Conversion */
    int a = 10;
    float b = 3.5;

    float result = a + b;  // Implicit conversion
    printf("Implicit Conversion Result: %.2f\n", result);

    int c = (int)b;  // Explicit type casting
    printf("Explicit Type Casting Result: %d\n", c);

    return 0;
}
