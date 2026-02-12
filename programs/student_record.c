#include <stdio.h>

#define SUBJECTS 3   // Constant example

int main() {
    char name[50];
    char surname[50];
    int maths = 0, english = 0, science = 0;

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Surname: ");
    scanf("%s", surname);

    printf("Enter English Marks: ");
    scanf("%d", &english);

    printf("Enter Maths Marks: ");
    scanf("%d", &maths);

    printf("Enter Science Marks: ");
    scanf("%d", &science);

    float average = (maths + english + science) / (float)SUBJECTS;

    printf("\n----- Student Record -----\n");
    printf("Name      : %s %s\n", name, surname);
    printf("English   : %d\n", english);
    printf("Maths     : %d\n", maths);
    printf("Science   : %d\n", science);
    printf("Average   : %.2f\n", average);

    return 0;
}
