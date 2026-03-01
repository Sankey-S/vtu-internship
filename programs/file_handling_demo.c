#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *fp;

    /* Writing to a file */
    fp = fopen("sample.txt", "w");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "Hello, this is file handling in C.\n");
    fprintf(fp, "Learning VTU Internship Concepts.\n");

    fclose(fp);

    /* Reading from file */
    fp = fopen("sample.txt", "r");

    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    char ch;
    printf("File Content:\n");

    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);

    return 0;
}
