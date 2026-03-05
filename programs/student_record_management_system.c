#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_NAME "students.txt"

typedef struct {
    int id;
    char name[50];
    int marks[3];
    float average;
} Student;

void addStudent();
void viewStudents();
void searchStudent();
void deleteStudent();
float calculateAverage(int marks[]);

int main() {

    int choice;

    while (1) {

        printf("\n===== STUDENT RECORD MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. View Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                addStudent();
                break;

            case 2:
                viewStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                deleteStudent();
                break;

            case 5:
                printf("Exiting program...\n");
                exit(0);

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}

float calculateAverage(int marks[]) {

    int sum = 0;

    for (int i = 0; i < 3; i++) {
        sum += marks[i];
    }

    return (float)sum / 3;
}

void addStudent() {

    FILE *fp;
    Student s;

    fp = fopen(FILE_NAME, "a");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return;
    }

    printf("Enter Student ID: ");
    scanf("%d", &s.id);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter marks for 3 subjects:\n");

    for (int i = 0; i < 3; i++) {
        scanf("%d", &s.marks[i]);
    }

    s.average = calculateAverage(s.marks);

    fwrite(&s, sizeof(Student), 1, fp);

    fclose(fp);

    printf("Student record added successfully.\n");
}

void viewStudents() {

    FILE *fp;
    Student s;

    fp = fopen(FILE_NAME, "r");

    if (fp == NULL) {
        printf("No records found.\n");
        return;
    }

    printf("\n--- Student Records ---\n");

    while (fread(&s, sizeof(Student), 1, fp)) {

        printf("\nID: %d\n", s.id);
        printf("Name: %s\n", s.name);
        printf("Marks: %d %d %d\n", s.marks[0], s.marks[1], s.marks[2]);
        printf("Average: %.2f\n", s.average);
    }

    fclose(fp);
}

void searchStudent() {

    FILE *fp;
    Student s;
    int id, found = 0;

    fp = fopen(FILE_NAME, "r");

    if (fp == NULL) {
        printf("No records found.\n");
        return;
    }

    printf("Enter Student ID to search: ");
    scanf("%d", &id);

    while (fread(&s, sizeof(Student), 1, fp)) {

        if (s.id == id) {

            printf("\nStudent Found:\n");
            printf("ID: %d\n", s.id);
            printf("Name: %s\n", s.name);
            printf("Average: %.2f\n", s.average);

            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student not found.\n");
    }

    fclose(fp);
}

void deleteStudent() {

    FILE *fp, *temp;
    Student s;
    int id, found = 0;

    fp = fopen(FILE_NAME, "r");
    temp = fopen("temp.txt", "w");

    if (fp == NULL) {
        printf("No records found.\n");
        return;
    }

    printf("Enter Student ID to delete: ");
    scanf("%d", &id);

    while (fread(&s, sizeof(Student), 1, fp)) {

        if (s.id != id) {
            fwrite(&s, sizeof(Student), 1, temp);
        } else {
            found = 1;
        }
    }

    fclose(fp);
    fclose(temp);

    remove(FILE_NAME);
    rename("temp.txt", FILE_NAME);

    if (found)
        printf("Student record deleted successfully.\n");
    else
        printf("Student not found.\n");
}
